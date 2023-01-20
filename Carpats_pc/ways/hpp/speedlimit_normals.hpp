#include <iostream>

class speedlimit_normals {
public:
float normals [16383] = {
0.098, 0, -0.9952, 
0.098, 0, -0.9952, 
0.098, 0, -0.9952, 
0.2903, 0, -0.9569, 
0.2903, 0, -0.9569, 
0.2903, 0, -0.9569, 
0.4714, 0, -0.8819, 
0.4714, 0, -0.8819, 
0.4714, 0, -0.8819, 
0.6344, 0, -0.773, 
0.6344, 0, -0.773, 
0.6344, 0, -0.773, 
0.773, 0, -0.6344, 
0.773, 0, -0.6344, 
0.773, 0, -0.6344, 
0.8819, 0, -0.4714, 
0.8819, 0, -0.4714, 
0.8819, 0, -0.4714, 
0.9569, 0, -0.2903, 
0.9569, 0, -0.2903, 
0.9569, 0, -0.2903, 
0.9952, 0, -0.098, 
0.9952, 0, -0.098, 
0.9952, 0, -0.098, 
0.9952, 0, 0.098, 
0.9952, 0, 0.098, 
0.9952, 0, 0.098, 
0.9569, 0, 0.2903, 
0.9569, 0, 0.2903, 
0.9569, 0, 0.2903, 
0.8819, 0, 0.4714, 
0.8819, 0, 0.4714, 
0.8819, 0, 0.4714, 
0.773, 0, 0.6344, 
0.773, 0, 0.6344, 
0.773, 0, 0.6344, 
0.6344, 0, 0.773, 
0.6344, 0, 0.773, 
0.6344, 0, 0.773, 
0.4714, 0, 0.8819, 
0.4714, 0, 0.8819, 
0.4714, 0, 0.8819, 
0.2903, 0, 0.9569, 
0.2903, 0, 0.9569, 
0.2903, 0, 0.9569, 
0.098, 0, 0.9952, 
0.098, 0, 0.9952, 
0.098, 0, 0.9952, 
-0.098, 0, 0.9952, 
-0.098, 0, 0.9952, 
-0.098, 0, 0.9952, 
-0.2903, 0, 0.9569, 
-0.2903, 0, 0.9569, 
-0.2903, 0, 0.9569, 
-0.4714, 0, 0.8819, 
-0.4714, 0, 0.8819, 
-0.4714, 0, 0.8819, 
-0.6344, 0, 0.773, 
-0.6344, 0, 0.773, 
-0.6344, 0, 0.773, 
-0.773, 0, 0.6344, 
-0.773, 0, 0.6344, 
-0.773, 0, 0.6344, 
-0.8819, 0, 0.4714, 
-0.8819, 0, 0.4714, 
-0.8819, 0, 0.4714, 
-0.9569, 0, 0.2903, 
-0.9569, 0, 0.2903, 
-0.9569, 0, 0.2903, 
-0.9952, 0, 0.098, 
-0.9952, 0, 0.098, 
-0.9952, 0, 0.098, 
-0.9952, 0, -0.098, 
-0.9952, 0, -0.098, 
-0.9952, 0, -0.098, 
-0.9569, 0, -0.2903, 
-0.9569, 0, -0.2903, 
-0.9569, 0, -0.2903, 
-0.8819, 0, -0.4714, 
-0.8819, 0, -0.4714, 
-0.8819, 0, -0.4714, 
-0.773, 0, -0.6344, 
-0.773, 0, -0.6344, 
-0.773, 0, -0.6344, 
-0.6344, 0, -0.773, 
-0.6344, 0, -0.773, 
-0.6344, 0, -0.773, 
-0.4714, 0, -0.8819, 
-0.4714, 0, -0.8819, 
-0.4714, 0, -0.8819, 
-0.2903, 0, -0.9569, 
-0.2903, 0, -0.9569, 
-0.2903, 0, -0.9569, 
-0.098, 0, -0.9952, 
-0.098, 0, -0.9952, 
-0.098, 0, -0.9952, 
0.098, 0, -0.9952, 
0.098, 0, -0.9952, 
0.098, 0, -0.9952, 
0.2903, 0, -0.9569, 
0.2903, 0, -0.9569, 
0.2903, 0, -0.9569, 
0.4714, 0, -0.8819, 
0.4714, 0, -0.8819, 
0.4714, 0, -0.8819, 
0.6344, 0, -0.773, 
0.6344, 0, -0.773, 
0.6344, 0, -0.773, 
0.773, 0, -0.6344, 
0.773, 0, -0.6344, 
0.773, 0, -0.6344, 
0.8819, 0, -0.4714, 
0.8819, 0, -0.4714, 
0.8819, 0, -0.4714, 
0.9569, 0, -0.2903, 
0.9569, 0, -0.2903, 
0.9569, 0, -0.2903, 
0.9952, 0, -0.098, 
0.9952, 0, -0.098, 
0.9952, 0, -0.098, 
0.9952, 0, 0.098, 
0.9952, 0, 0.098, 
0.9952, 0, 0.098, 
0.9569, 0, 0.2903, 
0.9569, 0, 0.2903, 
0.9569, 0, 0.2903, 
0.8819, 0, 0.4714, 
0.8819, 0, 0.4714, 
0.8819, 0, 0.4714, 
0.773, 0, 0.6344, 
0.773, 0, 0.6344, 
0.773, 0, 0.6344, 
0.6344, 0, 0.773, 
0.6344, 0, 0.773, 
0.6344, 0, 0.773, 
0.4714, 0, 0.8819, 
0.4714, 0, 0.8819, 
0.4714, 0, 0.8819, 
0.2903, 0, 0.9569, 
0.2903, 0, 0.9569, 
0.2903, 0, 0.9569, 
0.098, 0, 0.9952, 
0.098, 0, 0.9952, 
0.098, 0, 0.9952, 
-0.098, 0, 0.9952, 
-0.098, 0, 0.9952, 
-0.098, 0, 0.9952, 
-0.2903, 0, 0.9569, 
-0.2903, 0, 0.9569, 
-0.2903, 0, 0.9569, 
-0.4714, 0, 0.8819, 
-0.4714, 0, 0.8819, 
-0.4714, 0, 0.8819, 
-0.6344, 0, 0.773, 
-0.6344, 0, 0.773, 
-0.6344, 0, 0.773, 
-0.773, 0, 0.6344, 
-0.773, 0, 0.6344, 
-0.773, 0, 0.6344, 
-0.8819, 0, 0.4714, 
-0.8819, 0, 0.4714, 
-0.8819, 0, 0.4714, 
-0.9569, 0, 0.2903, 
-0.9569, 0, 0.2903, 
-0.9569, 0, 0.2903, 
-0.9952, 0, 0.098, 
-0.9952, 0, 0.098, 
-0.9952, 0, 0.098, 
-0.9952, 0, -0.098, 
-0.9952, 0, -0.098, 
-0.9952, 0, -0.098, 
-0.9569, 0, -0.2903, 
-0.9569, 0, -0.2903, 
-0.9569, 0, -0.2903, 
-0.8819, 0, -0.4714, 
-0.8819, 0, -0.4714, 
-0.8819, 0, -0.4714, 
-0.773, 0, -0.6344, 
-0.773, 0, -0.6344, 
-0.773, 0, -0.6344, 
-0.6344, 0, -0.773, 
-0.6344, 0, -0.773, 
-0.6344, 0, -0.773, 
-0.4714, 0, -0.8819, 
-0.4714, 0, -0.8819, 
-0.4714, 0, -0.8819, 
-0.2903, 0, -0.9569, 
-0.2903, 0, -0.9569, 
-0.2903, 0, -0.9569, 
-0.098, 0, -0.9952, 
-0.098, 0, -0.9952, 
-0.098, 0, -0.9952, 
0.098, 0.9952, 0, 
0.098, 0.9952, 0, 
0.098, 0.9952, 0, 
0.2903, 0.9569, 0, 
0.2903, 0.9569, 0, 
0.2903, 0.9569, 0, 
0.4714, 0.8819, 0, 
0.4714, 0.8819, 0, 
0.4714, 0.8819, 0, 
0.6344, 0.773, 0, 
0.6344, 0.773, 0, 
0.6344, 0.773, 0, 
0.773, 0.6344, 0, 
0.773, 0.6344, 0, 
0.773, 0.6344, 0, 
0.8819, 0.4714, 0, 
0.8819, 0.4714, 0, 
0.8819, 0.4714, 0, 
0.9569, 0.2903, 0, 
0.9569, 0.2903, 0, 
0.9569, 0.2903, 0, 
0.9952, 0.098, 0, 
0.9952, 0.098, 0, 
0.9952, 0.098, 0, 
0.9952, -0.098, 0, 
0.9952, -0.098, 0, 
0.9952, -0.098, 0, 
0.9569, -0.2903, -0, 
0.9569, -0.2903, -0, 
0.9569, -0.2903, -0, 
0.8819, -0.4714, 0, 
0.8819, -0.4714, 0, 
0.8819, -0.4714, 0, 
0.773, -0.6344, 0, 
0.773, -0.6344, 0, 
0.773, -0.6344, 0, 
0.6344, -0.773, 0, 
0.6344, -0.773, 0, 
0.6344, -0.773, 0, 
0.4714, -0.8819, 0, 
0.4714, -0.8819, 0, 
0.4714, -0.8819, 0, 
0.2903, -0.9569, 0, 
0.2903, -0.9569, 0, 
0.2903, -0.9569, 0, 
0.098, -0.9952, 0, 
0.098, -0.9952, 0, 
0.098, -0.9952, 0, 
-0.098, -0.9952, 0, 
-0.098, -0.9952, 0, 
-0.098, -0.9952, 0, 
-0.2903, -0.9569, 0, 
-0.2903, -0.9569, 0, 
-0.2903, -0.9569, 0, 
-0.4714, -0.8819, 0, 
-0.4714, -0.8819, 0, 
-0.4714, -0.8819, 0, 
-0.6344, -0.773, 0, 
-0.6344, -0.773, 0, 
-0.6344, -0.773, 0, 
-0.773, -0.6344, 0, 
-0.773, -0.6344, 0, 
-0.773, -0.6344, 0, 
-0.8819, -0.4714, 0, 
-0.8819, -0.4714, 0, 
-0.8819, -0.4714, 0, 
-0.9569, -0.2903, 0, 
-0.9569, -0.2903, 0, 
-0.9569, -0.2903, 0, 
-0.9952, -0.098, -0, 
-0.9952, -0.098, -0, 
-0.9952, -0.098, -0, 
-0.9952, 0.098, 0, 
-0.9952, 0.098, 0, 
-0.9952, 0.098, 0, 
-0.9569, 0.2903, 0, 
-0.9569, 0.2903, 0, 
-0.9569, 0.2903, 0, 
-0.8819, 0.4714, 0, 
-0.8819, 0.4714, 0, 
-0.8819, 0.4714, 0, 
-0.773, 0.6344, 0, 
-0.773, 0.6344, 0, 
-0.773, 0.6344, 0, 
-0.6344, 0.773, 0, 
-0.6344, 0.773, 0, 
-0.6344, 0.773, 0, 
-0.4714, 0.8819, 0, 
-0.4714, 0.8819, 0, 
-0.4714, 0.8819, 0, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0.2903, 0.9569, 0, 
-0.2903, 0.9569, 0, 
-0.2903, 0.9569, 0, 
-0.098, 0.9952, 0, 
-0.098, 0.9952, 0, 
-0.098, 0.9952, 0, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0.098, 0.9952, 0, 
0.098, 0.9952, 0, 
0.098, 0.9952, 0, 
0.2903, 0.9569, 0, 
0.2903, 0.9569, 0, 
0.2903, 0.9569, 0, 
0.4714, 0.8819, 0, 
0.4714, 0.8819, 0, 
0.4714, 0.8819, 0, 
0.6344, 0.773, 0, 
0.6344, 0.773, 0, 
0.6344, 0.773, 0, 
0.773, 0.6344, 0, 
0.773, 0.6344, 0, 
0.773, 0.6344, 0, 
0.8819, 0.4714, 0, 
0.8819, 0.4714, 0, 
0.8819, 0.4714, 0, 
0.9569, 0.2903, 0, 
0.9569, 0.2903, 0, 
0.9569, 0.2903, 0, 
0.9952, 0.098, 0, 
0.9952, 0.098, 0, 
0.9952, 0.098, 0, 
0.9952, -0.098, 0, 
0.9952, -0.098, 0, 
0.9952, -0.098, 0, 
0.9569, -0.2903, -0, 
0.9569, -0.2903, -0, 
0.9569, -0.2903, -0, 
0.8819, -0.4714, 0, 
0.8819, -0.4714, 0, 
0.8819, -0.4714, 0, 
0.773, -0.6344, 0, 
0.773, -0.6344, 0, 
0.773, -0.6344, 0, 
0.6344, -0.773, 0, 
0.6344, -0.773, 0, 
0.6344, -0.773, 0, 
0.4714, -0.8819, 0, 
0.4714, -0.8819, 0, 
0.4714, -0.8819, 0, 
0.2903, -0.9569, 0, 
0.2903, -0.9569, 0, 
0.2903, -0.9569, 0, 
0.098, -0.9952, 0, 
0.098, -0.9952, 0, 
0.098, -0.9952, 0, 
-0.098, -0.9952, 0, 
-0.098, -0.9952, 0, 
-0.098, -0.9952, 0, 
-0.2903, -0.9569, 0, 
-0.2903, -0.9569, 0, 
-0.2903, -0.9569, 0, 
-0.4714, -0.8819, 0, 
-0.4714, -0.8819, 0, 
-0.4714, -0.8819, 0, 
-0.6344, -0.773, 0, 
-0.6344, -0.773, 0, 
-0.6344, -0.773, 0, 
-0.773, -0.6344, 0, 
-0.773, -0.6344, 0, 
-0.773, -0.6344, 0, 
-0.8819, -0.4714, 0, 
-0.8819, -0.4714, 0, 
-0.8819, -0.4714, 0, 
-0.9569, -0.2903, 0, 
-0.9569, -0.2903, 0, 
-0.9569, -0.2903, 0, 
-0.9952, -0.098, -0, 
-0.9952, -0.098, -0, 
-0.9952, -0.098, -0, 
-0.9952, 0.098, 0, 
-0.9952, 0.098, 0, 
-0.9952, 0.098, 0, 
-0.9569, 0.2903, 0, 
-0.9569, 0.2903, 0, 
-0.9569, 0.2903, 0, 
-0.8819, 0.4714, 0, 
-0.8819, 0.4714, 0, 
-0.8819, 0.4714, 0, 
-0.773, 0.6344, 0, 
-0.773, 0.6344, 0, 
-0.773, 0.6344, 0, 
-0.6344, 0.773, 0, 
-0.6344, 0.773, 0, 
-0.6344, 0.773, 0, 
-0.4714, 0.8819, 0, 
-0.4714, 0.8819, 0, 
-0.4714, 0.8819, 0, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0, -0, 1, 
-0.2903, 0.9569, 0, 
-0.2903, 0.9569, 0, 
-0.2903, 0.9569, 0, 
-0.098, 0.9952, 0, 
-0.098, 0.9952, 0, 
-0.098, 0.9952, 0, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
};
};