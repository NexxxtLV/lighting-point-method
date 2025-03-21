#pragma once
#include <vector>

std::vector<std::vector<double>> horizontalIlluminationArr =
{
    //d ->
    //Hp
    {0,    0,     1,     2,     3,     4,      5,     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,    18,    20,    22,    24,    26,    28,    30,    35,    40,     50},
    {1,   -1,    -1,    -1,    -1,    -1,     -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   -1,    -1,    -1,      -1},
    {2,  25.00, 17.85, 8.850, 4.275, 2.245, 1.298, 0.802, 0.528, 0.355, 0.255, 0.190, 0.142, 0.113, 0.090, 0.070, 0.058, 0.048, 0.038, 0.025, 0.020, 0.015, 0.013, 0.008, 0.007, 0.004, 0.000, 0.000},
    {3,  11.11, 9.500, 6.400, 3.933, 2.400, 1.522, 1.000, 0.680, 0.477, 0.356, 0.264, 0.205, 0.161, 0.126, 0.100, 0.084, 0.070, 0.050, 0.036, 0.027, 0.021, 0.016, 0.012, 0.011, 0.007, 0.004, 0.002},
    {4,  6.250, 5.707, 4.472, 3.200, 2.210, 1.524, 1.066, 0.764, 0.559, 0.419, 0.320, 0.249, 0.198, 0.159, 0.130, 0.107, 0.090, 0.064, 0.047, 0.037, 0.028, 0.022, 0.018, 0.015, 0.009, 0.006, 0.003},
    {5,  4.000, 3.771, 3.202, 2.522, 1.904, 1.414, 1.050, 0.783, 0.593, 0.458, 0.358, 0.283, 0.228, 0.185, 0.152, 0.126, 0.106, 0.077, 0.057, 0.044, 0.340, 0.027, 0.022, 0.017, 0.010, 0.008, 0.004},
    {6,  2.278, 2.673, 2.372, 1.987, 1.600, 1.260, 0.982, 0.766, 0.600, 0.474, 0.378, 0.305, 0.249, 0.205, 0.170, 0.142, 0.120, 0.088, 0.066, 0.510, 0.040, 0.032, 0.026, 0.021, 0.013, 0.009, 0.005},
    {7,  2.041, 1.980, 1.814, 1.585, 1.366, 1.100, 0.893, 0.722, 0.583, 0.473, 0.358, 0.316, 0.261, 0.218, 0.183, 0.154, 0.131, 0.097, 0.074, 0.057, 0.045, 0.036, 0.029, 0.024, 0.016, 0.010, 0.006},
    {8,  1.563, 1.527, 1.427, 1.283, 1.118, 0.958, 0.800, 0.672, 0.552, 0.458, 0.381, 0.318, 0.267, 0.225, 0.191, 0.163, 0.140, 0.105, 0.080, 0.063, 0.050, 0.040, 0.032, 0.026, 0.018, 0.012, 0.007},
    {9,  1.235, 1.212, 1.148, 1.054, 0.943, 0.825, 0.711, 0.697, 0.515, 0.437, 0.370, 0.314, 0.267, 0.228, 0.196, 0.168, 0.146, 0.110, 0.085, 0.067, 0.053, 0.043, 0.035, 0.029, 0.019, 0.013, 0.008},
    {10, 1.000, 0.985, 0.943, 0.879, 0.801, 0.716, 0.631, 0.550, 0.476, 0.411, 0.354, 0.305, 0.263, 0.227, 0.196, 0.171, 0.149, 0.115, 0.039, 0.071, 0.057, 0.046, 0.038, 0.032, 0.021, 0.014, 0.008}
    //{11, 0.826, 0.816, 0.787, 0.742, 0.686, 0.623, 0.559, 0.496, 0.437, 0.383, 0.335},
    //{12, 0.694, 0.687, 0.668, 0.634, 0.593, 0.546, 0.497, 0.448, 0.400, 0.356, 0.150},
    //{13, 0.592, 0.587, 0.571, 0.547, 0.517, 0.481, 0.447, 0.404, 0.360, 0.329, 0.293},
    //{14, 0.510, 0.506, 0.495, 0.477, 0.454, 0.426, 0.396, 0.365, 0.334, 0.304, 0.275},
    //{15, 0.440, 0.442, 0.433, 0.419, 0.401, 0.380, 0.356, 0.331, 0.305, 0.280, 0.256},
    //{16, 0.391, 0.388, 0.382, 0.371, 0.357, 0.339, 0.321, 0.300, 0.280, 0.259, 0.238},
    //{17, 0.345, 0.344, 0.339, 0.331, 0.319, 0.306, 0.290, 0.274, 0.256, 0.239, 0.222},
    //{18, 0.309, 0.307, 0.303, 0.297, 0.287, 0.276, 0.264, 0.250, 0.236, 0.221, 0.206},
    //{19, 0.277, 0.276, 0.273, 0.267, 0.260, 0.251, 0.240, 0.229, 0.217, 0.205, 0.192},
    //{20, 0.250, 0.249, 0.246, 0.242, 0.236, 0.228, 0.219, 0.210, 0.200, 0.190, 0.179},
    //{21, 0.227, 0.226, 0.224, 0.220, 0.215, 0.210, 0.201, 0.194, 0.183, 0.176, 0.167},
    //{22, 0.207, 0.206, 0.205, 0.201, 0.196, 0.192, 0.185, 0.179, 0.171, 0.164, 0.155},
    //{23, 0.189, 0.189, 0.187, 0.184, 0.181, 0.176, 0.171, 0.165, 0.159, 0.153, 0.146},
    //{24, 0.174, 0.174, 0.172, 0.170, 0.166, 0.163, 0.158, 0.154, 0.148, 0.143, 0.137},
    //{25, 0.160, 0.160, 0.158, 0.157, 0.154, 0.151, 0.147, 0.143, 0.138, 0.133, 0.128},
    //{27, 0.137, 0.137, 0.136, 0.135, 0.330, 0.130, 0.128, 0.124, 0.121, 0.117, 0.113},
    //{30, 0.110, 0.111, 0.111, 0.109, 0.108, 0.107, 0.105, 0.103, 0.100, 0.098, 0.095},
    //{33, 0.092, 0.092, 0.091, 0.091, 0.090, 0.089, 0.087, 0.086, 0.084, 0.082, 0.080},
    //{36, 0.077, 0.077, 0.077, 0.076, 0.076, 0.075, 0.074, 0.073, 0.072, 0.070, 0.069}
};

std::vector<std::vector<int>> alphaArr =
{
    {0,  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 18, 20, 22, 24, 26, 28, 30, 35, 40, 50},
    {1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 - 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
    {2,  0, 27, 45, 56, 63, 68, 71, 74, 76, 78, 79, 80, 81, 81, 82, 82, 83, 84, 84, 85, 85, 86, 86, 86, 87, 87, 87},
    {3,  0, 18, 34, 45, 53, 59, 63, 67, 69, 72, 73, 75, 76, 77, 78, 79, 80, 81, 81, 82, 83, 83, 84, 84, 85, 86, 87},
    {4,  0, 14, 27, 37, 45, 51, 56, 60, 63, 66, 68, 70, 72, 73, 74, 75, 76, 78, 79, 80, 81, 81, 82, 82, 84, 84, 86},
    {5,  0, 11, 22, 31, 39, 45, 50, 54, 58, 61, 63, 66, 67, 69, 70, 72, 73, 74, 76, 77, 78, 79, 80, 81, 82, 81, 84},
    {6,  0, 9,  18, 27, 34, 40, 45, 49, 53, 56, 59, 61, 63, 66, 67, 68, 69, 71, 73, 75, 76, 77, 78, 79, 80, 81, 83},
    {7,  0, 8,  16, 23, 30, 36, 41, 45, 49, 52, 55, 58, 60, 62, 63, 65, 66, 69, 71, 72, 74, 75, 76, 77, 79, 80, 82},
    {8,  0, 7,  14, 21, 27, 32, 37, 41, 45, 48, 51, 54, 56, 58, 60, 62, 63, 66, 68, 70, 72, 73, 74, 75, 77, 79, 81},
    {9,  0, 6,  13, 18, 24, 29, 34, 38, 42, 45, 48, 51, 53, 55, 57, 59, 61, 63, 66, 68, 69, 71, 72, 73, 76, 77, 80},
    {10, 0, 6,  11, 17, 22, 27, 31, 35, 39, 42, 45, 48, 50, 52, 54, 56, 58, 61, 63, 66, 67, 69, 70, 72, 74, 76, 79}
    //{11, 0, 5,  10, 15, 20, 24, 29, 32, 36, 39, 42},
    //{12, 0, 5, 9,   14, 18, 23, 27, 30, 34, 37, 40},
    //{13, 0, 4, 9,   13, 17, 21, 25, 28, 32, 35, 38},
    //{14, 0, 4, 8,   12, 16, 20, 23, 27, 30, 33, 36},
    //{15, 0, 4, 8,   11, 15, 18, 22, 25, 28, 31, 34},
    //{16, 0, 4, 7,   11, 14, 17, 21, 24, 27, 29, 32},
    //{17, 0, 4, 7,   10, 13, 16, 19, 22, 25, 28, 30},
    //{18, 0, 4, 6, 9,    13, 16, 18, 21, 24, 27, 29},
    //{19, 0, 3, 6, 9,    12, 15, 18, 20, 23, 25, 28},
    //{20, 0, 3, 6, 9,    11, 14, 17, 19, 22, 24, 27},
    //{21, 0, 3, 6, 8,    11, 13, 16, 18, 21, 23, 25},
    //{22, 0, 4, 5, 8,    10, 13, 15, 18, 20, 22, 25},
    //{23, 0, 3, 5, 7,    10, 12, 15, 17, 19, 21, 24},
    //{24, 0, 3, 5, 7,    10, 12, 14, 16, 18, 21, 23},
    //{25, 0, 3, 5, 7, 9,     11, 14, 16, 18, 20, 22},
    //{27, 0, 3, 5, 6, 8,     10, 12, 15, 17, 19, 20},
    //{30, 0, 2, 4, 6, 8,     9,  11, 13, 15, 17, 18},
    //{33, 0, 2, 4, 5, 7,     9,  10, 12, 14, 15, 17},
    //{36, 0, 2, 3, 5, 6,     8,  9,  11, 13, 14, 16}
};

std::vector<std::vector<double>> luminousPowerArr =
{
    //   �-1    �-1
    {0, 233.4, 377.3},
    {5, 232.9, 375.5},
    {10, 229.2, 370.3},
    {15, 228.5, 361.6},
    {20, 224.7, 349.8},
    {25, 220.0, 334.3},
    {30, 214.1, 316.0},
    {35, 207.1, 294.7},
    {40, 199.3, 270.7},
    {45, 190.6, 244.2},
    {50, 180.0, 215.4},
    {55, 170.5, 184.6},
    {60, 159.2, 152.0},
    {65, 147.1, 118.2},
    {70, 134.3, 83.1},
    {72, 0, 0},
    {74, 0, 0},
    {75, 121.0, 47.4},
    {76, 0, 0},
    {78, 0, 0},
    {80, 106.9, 11.1},
    {82, 0, 0},
    {84, 0, 0},
    {85, 92.5, 0},
    {86, 0, 0},
    {88, 0, 0},
    {90, 77.7, 0}
};