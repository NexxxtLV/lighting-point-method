#include <iostream>
#include <string>
#include "referenceData.h"

//#define DEBUG

double linearInterpolation(double x, double x1, double x2, double fx1, double fx2)
{
    return fx1 + (x - x1) * ((fx2 - fx1) / (x2 - x1));
}

double findData(float d, float height, int luminousIntensityCurve)
{
    //���������� ������������������ �������������� ������������
    int hClosest1 = 0; //��������� ������ �������� � d �� �����������
    int hClosest2 = 0;
    int vClosest1 = 0; //��������� ������ �������� � d �� ���������
    int vClosest2 = 0;

    //������� �������� �� �������
    int hIClosest1 = 0;
    int hIClosest2 = 0;
    int vIClosest1 = 0;
    int vIClosest2 = 0;

    for (int i = 0; i < horizontalIlluminationArr[0].size(); ++i)
    {
        if (d <= horizontalIlluminationArr[0][i])
        {
            hClosest1 = horizontalIlluminationArr[0][i - 1];
            hClosest2 = horizontalIlluminationArr[0][i];

            hIClosest1 = i - 1;
            hIClosest2 = i;
            break;
        }
    }

    for (int i = 0; i < horizontalIlluminationArr.size(); ++i)
    {
        if (height < horizontalIlluminationArr[i][0])
        {
            vClosest1 = horizontalIlluminationArr[i - 1][0];
            vClosest2 = horizontalIlluminationArr[i][0];

            vIClosest1 = i - 1;
            vIClosest2 = i;
            break;
        }
    }

    double illum1 = horizontalIlluminationArr[vIClosest1][hIClosest1];
    double illum2 = horizontalIlluminationArr[vIClosest1][hIClosest2];
    double illum3 = horizontalIlluminationArr[vIClosest2][hIClosest1];
    double illum4 = horizontalIlluminationArr[vIClosest2][hIClosest2];

    //����������������� �������� �������������� ������������ �� ������
    double heightIllum1 = linearInterpolation(height, vClosest1, vClosest2, illum1, illum3);
    double heightIllum2 = linearInterpolation(height, vClosest1, vClosest2, illum2, illum4);

    //����������������� �������������� ������������ �� ������ ����������������� ��������� �������������� ������������
    double e100 = linearInterpolation(d, hClosest1, hClosest2, heightIllum1, heightIllum2);


    //���������� ���� �����
    int alpha1 = alphaArr[vIClosest1][hIClosest1];
    int alpha2 = alphaArr[vIClosest1][hIClosest2];
    int alpha3 = alphaArr[vIClosest2][hIClosest1];
    int alpha4 = alphaArr[vIClosest2][hIClosest2];

    //����������������� �������� ���� ����� �� ������
    double heightAlpha1 = linearInterpolation(height, vClosest1, vClosest2, alpha1, alpha3);
    double heightAlpha2 = linearInterpolation(height, vClosest1, vClosest2, alpha2, alpha4);

    //����������������� ���� ����� �� ������ ����������������� ��������� ���� �����
    double alpha = linearInterpolation(d, hClosest1, hClosest2, heightAlpha1, heightAlpha2);


    //���������� �������� ���� ����� 
    int vClosest21 = 0;
    int vClosest22 = 0;
    int vIClosest21 = 0;
    int vIClosest22 = 0;

    for (int i = 0; i < luminousPowerArr.size(); ++i)
    {
        if (alpha < luminousPowerArr[i][0] && i > 0)
        {
            vClosest21 = luminousPowerArr[i - 1][0];
            vClosest22 = luminousPowerArr[i][0];

            vIClosest21 = i - 1;
            vIClosest22 = i;
            break;
        }
    }

    double luminousPower1 = luminousPowerArr[vIClosest21][luminousIntensityCurve];
    double luminousPower2 = luminousPowerArr[vIClosest22][luminousIntensityCurve];
    double luminousPower3 = linearInterpolation(alpha, vClosest21, vClosest22, luminousPower1, luminousPower2);
#ifdef DEBUG
    printf("\n���� �����1: %.3f\n���� �����2: %.3f\n", (float)luminousPower1, (float)luminousPower2);
    printf("d: %i  %.3f  %i\nHp: %i  %.3f  %i\n", hClosest1, d, hClosest2, vClosest1, height, vClosest2);
    printf("%i:%i -> %.3f/%i\n%i:%i -> %.3f/%i\n%i:%i -> %.3f/%i\n%i:%i -> %.3f/%i\n", 
    vClosest1, hClosest1, (float)illum1, alpha1, 
    vClosest1, hClosest2, (float)illum2, alpha2, 
    vClosest2, hClosest1, (float)illum3, alpha3,
    hClosest2, vClosest2, (float)illum4, alpha4);

    printf("%.3f/%.3f\n%.3f/%.3f\n\n",
    (float)heightIllum1, (float)heightAlpha1,
    (float)heightIllum2, (float)heightAlpha2);
#endif

    printf("alpha: %.3f\ne100: %.3f\n", (float)alpha, (float)e100);
    printf("������. ���� �����: %.3f\n", (float)luminousPower3);

    //���������� ������������ � ����������� ����� �� ������ �����������
    double illumination = e100 * (luminousPower3 / 100);
    printf("������������ � ����������� �����: %.3f\n", (float)illumination);

    return illumination;
}

void foundHorizontalIllumination(float d1, float d2, float height, int lightFlow, int luminousIntensityCurve, double reserveFactor)
{
    printf("������� ������:\n������ ������� �����������, H: %.3f\n���������� ����� ������������ � ����������� ������, d: %.3f\n�������� �����, �: %i\n", height, d1, lightFlow);

    double illumination1 = findData(d1, height, luminousIntensityCurve);
    //double illumination2 = findData(d2, height, luminousIntensityCurve);
    double sum�fIlluminances = illumination1; //����� ������������� � ����������� �����
    printf("\n����� ������������� � ����������� �����: %.3f\n", (float)sum�fIlluminances);
    double totalIllumination = (lightFlow * 1.1 * sum�fIlluminances) / (1000 * reserveFactor);
    printf("������������ � ����������� �����: %.3f\n", (float)totalIllumination);
}

int main()
{
    setlocale(LC_ALL, "Russian");

    float d1 = 16.4f;
    float d2 = 17.4f;
    float height = 7.4f;
    int lightFlow = 7000;
    int luminousIntensityCurve = 2; //��� �-1 = 1; �-1 = 2
    double reserveFactor = 1.34; //���� ������, ���������� = 1.34; ������� � ������ = 1.614; ���������� = 1.701  
    float input = 0;

    for (int i = 0; i < 100; i++)
    {
        if (i > 0)
        {
            printf("������ �������� d1?\n>>>");
            std::cin >> input;

            if (input > 0)
                d1 = input;
            else if (input == '\n')
                break;
            else
                break;
        }

        foundHorizontalIllumination(d1, d2, height, lightFlow, luminousIntensityCurve, reserveFactor);
    }
    
    /*
    int inputForChanging = 0;
    for (int i = 0; i < 100; i++)
    {
        if (i > 0)
        {
            printf("������ ��� ������ ��������?\n1)���������� �� ����������� �� ����� - 1\n2)������ ������� ����������� - 2\n3)�������� ����� - 3\n4)��� - 4\n5)����������� ������ - 5");
            std::cin >> inputForChanging;

            switch (inputForChanging)
            {
            case 1:

            default:
                break;
            }
        }
        printf("������� ���������� �� ����������� �� �����:\n>>> ");
        std::cin >> input;
        foundHorizontalIllumination(input);
        printf("\n\n");
    }
    */
    system("pause");
    return 0;
}