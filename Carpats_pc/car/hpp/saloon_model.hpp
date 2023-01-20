#include <iostream>

class saloon_model {
public:
int totalv = 717;
float verts [16383] = {
1.5, -0.012616, -1.29664, 
1.39425, -0.014191, 3.23072, 
1.48925, -0.014192, 3.23095, 
1.48925, -1.51213, 3.2238, 
1.40499, -1.51056, -1.30402, 
1.5, -1.51056, -1.30379, 
1.48925, -0.014192, 3.23095, 
1.39425, -1.51213, 3.22357, 
1.48925, -1.51213, 3.2238, 
-1.5, -1.51056, -1.30379, 
-1.39741, -1.51286, 3.19716, 
-1.49691, -1.51286, 3.19723, 
-1.49691, -0.014921, 3.20438, 
-1.4005, -0.012616, -1.29671, 
-1.5, -0.012616, -1.29664, 
-1.49691, -1.51286, 3.19723, 
-1.39741, -0.014921, 3.20432, 
-1.49691, -0.014921, 3.20438, 
1.5, -0.012616, -1.29664, 
1.40499, -0.012615, -1.29687, 
1.39425, -0.014191, 3.23072, 
1.48925, -1.51213, 3.2238, 
1.39425, -1.51213, 3.22357, 
1.40499, -1.51056, -1.30402, 
1.48925, -0.014192, 3.23095, 
1.39425, -0.014191, 3.23072, 
1.39425, -1.51213, 3.22357, 
-1.5, -1.51056, -1.30379, 
-1.4005, -1.51056, -1.30386, 
-1.39741, -1.51286, 3.19716, 
-1.49691, -0.014921, 3.20438, 
-1.39741, -0.014921, 3.20432, 
-1.4005, -0.012616, -1.29671, 
-1.49691, -1.51286, 3.19723, 
-1.39741, -1.51286, 3.19716, 
-1.39741, -0.014921, 3.20432, 
1.5, -1.5, -0.538365, 
0.75, -1.51056, -1.30379, 
0.75, -1.5, -0.538365, 
-1.5, -0.012616, -1.29664, 
-0.75, -1.51056, -1.30379, 
0, -1.51056, -1.30379, 
0, -1.5, -0.538365, 
-0.75, -1.51056, -1.30379, 
-0.75, -1.5, -0.538365, 
0, -1.5, 1.96163, 
-0.75, -1.5, 0.711635, 
-0.75, -1.5, 1.96163, 
1.5, -1.5, 1.96163, 
0.75, -1.5, 0.711635, 
0.75, -1.5, 1.96163, 
0.75, -1.5, 1.96163, 
0, -1.5, 0.711635, 
0, -1.5, 1.96163, 
1.5, -1.5, -0.538365, 
1.46982, -0.683812, -0.538365, 
1.46982, -0.683812, 0.356309, 
0.75, -1.5, 3.21164, 
0.734908, -0.683812, 3.21164, 
0.367454, -0.683812, 3.21164, 
-0.75, -1.5, 1.96163, 
-1.5, -1.5, 0.711635, 
-1.5, -1.5, 1.96163, 
1.5, -1.5, 3.21164, 
1.46982, -0.683812, 3.21164, 
1.10236, -0.683812, 3.21164, 
-0.75, -1.5, -0.538365, 
-0.734908, -0.683812, -0.538365, 
-0.367454, -0.683812, -0.538365, 
-0.75, -1.5, -0.538365, 
-1.5, -1.51056, -1.30379, 
-1.5, -1.5, -0.538365, 
0, -1.5, 3.21164, 
0, -0.683812, 3.21164, 
-0.367454, -0.683812, 3.21164, 
0.75, -1.5, 1.96163, 
0.734908, -0.683812, 1.96163, 
1.10236, -0.683812, 1.96163, 
0.75, -1.5, -0.538365, 
0, -1.51056, -1.30379, 
0, -1.5, -0.538365, 
-1.5, -1.5, 3.21164, 
-1.46982, -0.683812, 3.21164, 
-1.46982, -0.683812, 2.85631, 
-1.5, -1.5, -0.538365, 
-1.46982, -0.683812, -0.538365, 
-1.10236, -0.683812, -0.538365, 
0, -0.683812, 2.85631, 
0.367454, 0.448138, 2.97292, 
0.367454, -0.683812, 2.85631, 
0.734908, -0.683812, 0.356309, 
1.10236, 0.448138, 0.472921, 
1.10236, -0.683812, 0.356309, 
-1.10236, -0.683812, 0.356309, 
-0.734908, 0.448138, 0.472921, 
-0.734908, -0.683812, 0.356309, 
1.46982, -0.683812, 3.21164, 
1.10236, 0.448138, 3.39534, 
1.10236, -0.683812, 3.21164, 
1.46982, -0.683812, 0.711635, 
1.46982, 0.448138, 0.472921, 
1.46982, 0.448138, 1.09792, 
0.367454, -0.683812, 3.21164, 
0, 0.448138, 3.39534, 
0, -0.683812, 3.21164, 
0, -0.683812, 0.356309, 
0.367454, 0.448138, 0.472921, 
0.367454, -0.683812, 0.356309, 
0, -0.683812, 0.711635, 
-0.367454, 0.448138, 1.09792, 
-0.367454, -0.683812, 0.711635, 
0, -1.5, 0.711635, 
0, -0.683812, 0.711635, 
-0.367454, -0.683812, 0.711635, 
-1.5, -1.5, 1.96163, 
-1.46982, -0.683812, 1.96163, 
-1.10236, -0.683812, 1.96163, 
1.5, -1.5, 0.711635, 
1.46982, -0.683812, 0.711635, 
1.10236, -0.683812, 0.711635, 
0, -1.5, -0.538365, 
0, -0.683812, -0.538365, 
0.367454, -0.683812, -0.538365, 
-0.75, -1.5, 1.96163, 
-0.734908, -0.683812, 1.96163, 
-0.367454, -0.683812, 1.96163, 
0.75, -1.5, -0.538365, 
0.734908, -0.683812, -0.538365, 
1.10236, -0.683812, -0.538365, 
-0.75, -1.5, 3.21164, 
-0.734908, -0.683812, 3.21164, 
-1.10236, -0.683812, 3.21164, 
-0.75, -1.5, 0.711635, 
-0.734908, -0.683812, 0.711635, 
-1.10236, -0.683812, 0.711635, 
1.5, -1.5, 1.96163, 
1.46982, -0.683812, 1.96163, 
1.46982, -0.683812, 2.85631, 
0.75, -1.5, 0.711635, 
0.734908, -0.683812, 0.711635, 
0.367454, -0.683812, 0.711635, 
0, -1.5, 1.96163, 
0, -0.683812, 1.96163, 
0.367454, -0.683812, 1.96163, 
-1.5, -1.5, 0.711635, 
-1.46982, -0.683812, 0.711635, 
-1.46982, -0.683812, 0.356309, 
0.734908, -0.683812, 0.711635, 
0.367454, 0.448138, 1.09792, 
0.367454, -0.683812, 0.711635, 
-1.10236, -0.683812, 0.711635, 
-1.46982, 0.448138, 1.09792, 
-1.46982, -0.683812, 0.711635, 
-0.367454, -0.683812, 2.85631, 
0, 0.448138, 2.97292, 
0, -0.683812, 2.85631, 
0.367454, -0.683812, 0.711635, 
0, 0.448138, 1.09792, 
0, -0.683812, 0.711635, 
-0.734908, -0.683812, 2.85631, 
-0.367454, 0.448138, 2.97292, 
-0.367454, -0.683812, 2.85631, 
-0.734908, -0.683812, 0.711635, 
-1.10236, 0.448138, 1.09792, 
-1.10236, -0.683812, 0.711635, 
0.734908, -0.683812, 3.21164, 
0.367454, 0.448138, 3.39534, 
0.367454, -0.683812, 3.21164, 
0, -0.683812, 3.21164, 
-0.367454, 0.448138, 3.39534, 
-0.367454, -0.683812, 3.21164, 
0.367454, -0.683812, 2.85631, 
0.734908, 0.448138, 2.97292, 
0.734908, -0.683812, 2.85631, 
0.367454, -0.683812, 0.356309, 
0.734908, 0.448138, 0.472921, 
0.734908, -0.683812, 0.356309, 
-1.10236, -0.683812, 1.96163, 
-1.46982, -0.683812, 1.96163, 
-1.10236, -0.683812, 2.85631, 
-0.367454, -0.683812, 3.21164, 
-0.734908, 0.448138, 3.39534, 
-0.734908, -0.683812, 3.21164, 
1.10236, -0.683812, 3.21164, 
0.734908, 0.448138, 3.39534, 
0.734908, -0.683812, 3.21164, 
1.10236, -0.683812, 0.711635, 
0.734908, 0.448138, 1.09792, 
0.734908, -0.683812, 0.711635, 
-1.46982, -0.683812, 3.21164, 
-1.46982, 0.448138, 2.97292, 
-1.46982, -0.683812, 2.85631, 
0.734908, -0.683812, 2.85631, 
1.10236, 0.448138, 2.97292, 
1.10236, -0.683812, 2.85631, 
1.10236, -0.683812, 2.85631, 
1.46982, 0.448138, 2.97292, 
1.46982, -0.683812, 2.85631, 
-1.46982, -0.683812, 0.356309, 
-1.10236, 0.448138, 0.472921, 
-1.10236, -0.683812, 0.356309, 
-1.46982, -0.683812, 0.711635, 
-1.46982, 0.448138, 0.472921, 
-1.46982, -0.683812, 0.356309, 
0, 0.448138, 2.97292, 
-0.367454, 0.448138, 2.97292, 
0, 0.448138, 3.39534, 
-1.10236, 0.448138, 0.472921, 
-1.46982, 0.448138, 0.472921, 
-1.10236, 0.448138, 1.09792, 
1.10236, -0.683812, 0.356309, 
1.46982, 0.448138, 0.472921, 
1.46982, -0.683812, 0.356309, 
1.46982, -0.683812, 0.711635, 
1.10236, 0.448138, 1.09792, 
1.10236, -0.683812, 0.711635, 
-0.367454, -0.683812, 0.711635, 
-0.734908, 0.448138, 1.09792, 
-0.734908, -0.683812, 0.711635, 
0.734908, -0.683812, -0.538365, 
0.367454, -0.683812, -0.538365, 
0.734908, -0.683812, 0.356309, 
-1.46982, -0.683812, 2.85631, 
-1.10236, 0.448138, 2.97292, 
-1.10236, -0.683812, 2.85631, 
-1.10236, -0.683812, 3.21164, 
-1.46982, 0.448138, 3.39534, 
-1.46982, -0.683812, 3.21164, 
-0.734908, -0.683812, 3.21164, 
-1.10236, 0.448138, 3.39534, 
-1.10236, -0.683812, 3.21164, 
-1.10236, -0.683812, 2.85631, 
-0.734908, 0.448138, 2.97292, 
-0.734908, -0.683812, 2.85631, 
1.46982, -0.683812, 3.21164, 
1.46982, 0.448138, 2.97292, 
1.46982, 0.448138, 3.39534, 
-0.734908, -0.683812, 0.356309, 
-0.367454, 0.448138, 0.472921, 
-0.367454, -0.683812, 0.356309, 
-0.367454, -0.683812, 0.356309, 
0, 0.448138, 0.472921, 
0, -0.683812, 0.356309, 
1.5, -0.012616, -1.29664, 
-1.5, -0.01187, -1.79552, 
-1.5, -0.012616, -1.29664, 
1.5, -1.5, -0.538365, 
1.5, -1.51056, -1.30379, 
0.75, -1.51056, -1.30379, 
-1.5, -0.012616, -1.29664, 
-1.5, -1.51056, -1.30379, 
-0.75, -1.51056, -1.30379, 
0, -1.51056, -1.30379, 
0.75, -1.51056, -1.30379, 
1.5, -0.012616, -1.29664, 
0.75, -1.51056, -1.30379, 
1.5, -1.51056, -1.30379, 
1.5, -0.012616, -1.29664, 
0, -1.51056, -1.30379, 
1.5, -0.012616, -1.29664, 
-1.5, -0.012616, -1.29664, 
0, -1.5, -0.538365, 
0, -1.51056, -1.30379, 
-0.75, -1.51056, -1.30379, 
0, -1.5, 1.96163, 
0, -1.5, 0.711635, 
-0.75, -1.5, 0.711635, 
1.5, -1.5, 1.96163, 
1.5, -1.5, 0.711635, 
0.75, -1.5, 0.711635, 
0.75, -1.5, 1.96163, 
0.75, -1.5, 0.711635, 
0, -1.5, 0.711635, 
1.46982, -0.683812, 0.711635, 
1.5, -1.5, 0.711635, 
1.46982, -0.683812, 0.356309, 
1.5, -1.5, 0.711635, 
1.5, -1.5, -0.538365, 
1.46982, -0.683812, 0.356309, 
0, -0.683812, 3.21164, 
0, -1.5, 3.21164, 
0.367454, -0.683812, 3.21164, 
0, -1.5, 3.21164, 
0.75, -1.5, 3.21164, 
0.367454, -0.683812, 3.21164, 
-0.75, -1.5, 1.96163, 
-0.75, -1.5, 0.711635, 
-1.5, -1.5, 0.711635, 
0.734908, -0.683812, 3.21164, 
0.75, -1.5, 3.21164, 
1.10236, -0.683812, 3.21164, 
0.75, -1.5, 3.21164, 
1.5, -1.5, 3.21164, 
1.10236, -0.683812, 3.21164, 
0, -0.683812, -0.538365, 
0, -1.5, -0.538365, 
-0.367454, -0.683812, -0.538365, 
0, -1.5, -0.538365, 
-0.75, -1.5, -0.538365, 
-0.367454, -0.683812, -0.538365, 
-0.75, -1.5, -0.538365, 
-0.75, -1.51056, -1.30379, 
-1.5, -1.51056, -1.30379, 
-0.734908, -0.683812, 3.21164, 
-0.75, -1.5, 3.21164, 
-0.367454, -0.683812, 3.21164, 
-0.75, -1.5, 3.21164, 
0, -1.5, 3.21164, 
-0.367454, -0.683812, 3.21164, 
1.46982, -0.683812, 1.96163, 
1.5, -1.5, 1.96163, 
1.10236, -0.683812, 1.96163, 
1.5, -1.5, 1.96163, 
0.75, -1.5, 1.96163, 
1.10236, -0.683812, 1.96163, 
0.75, -1.5, -0.538365, 
0.75, -1.51056, -1.30379, 
0, -1.51056, -1.30379, 
-1.46982, -0.683812, 1.96163, 
-1.5, -1.5, 1.96163, 
-1.46982, -0.683812, 2.85631, 
-1.5, -1.5, 1.96163, 
-1.5, -1.5, 3.21164, 
-1.46982, -0.683812, 2.85631, 
-0.734908, -0.683812, -0.538365, 
-0.75, -1.5, -0.538365, 
-1.10236, -0.683812, -0.538365, 
-0.75, -1.5, -0.538365, 
-1.5, -1.5, -0.538365, 
-1.10236, -0.683812, -0.538365, 
0, -0.683812, 2.85631, 
0, 0.448138, 2.97292, 
0.367454, 0.448138, 2.97292, 
0.734908, -0.683812, 0.356309, 
0.734908, 0.448138, 0.472921, 
1.10236, 0.448138, 0.472921, 
-1.10236, -0.683812, 0.356309, 
-1.10236, 0.448138, 0.472921, 
-0.734908, 0.448138, 0.472921, 
1.46982, -0.683812, 3.21164, 
1.46982, 0.448138, 3.39534, 
1.10236, 0.448138, 3.39534, 
1.46982, -0.683812, 0.711635, 
1.46982, -0.683812, 0.356309, 
1.46982, 0.448138, 0.472921, 
0.367454, -0.683812, 3.21164, 
0.367454, 0.448138, 3.39534, 
0, 0.448138, 3.39534, 
0, -0.683812, 0.356309, 
0, 0.448138, 0.472921, 
0.367454, 0.448138, 0.472921, 
0, -0.683812, 0.711635, 
0, 0.448138, 1.09792, 
-0.367454, 0.448138, 1.09792, 
-0.734908, -0.683812, 0.711635, 
-0.75, -1.5, 0.711635, 
-0.367454, -0.683812, 0.711635, 
-0.75, -1.5, 0.711635, 
0, -1.5, 0.711635, 
-0.367454, -0.683812, 0.711635, 
-0.734908, -0.683812, 1.96163, 
-0.75, -1.5, 1.96163, 
-1.10236, -0.683812, 1.96163, 
-0.75, -1.5, 1.96163, 
-1.5, -1.5, 1.96163, 
-1.10236, -0.683812, 1.96163, 
0.734908, -0.683812, 0.711635, 
0.75, -1.5, 0.711635, 
1.10236, -0.683812, 0.711635, 
0.75, -1.5, 0.711635, 
1.5, -1.5, 0.711635, 
1.10236, -0.683812, 0.711635, 
0.734908, -0.683812, -0.538365, 
0.75, -1.5, -0.538365, 
0.367454, -0.683812, -0.538365, 
0.75, -1.5, -0.538365, 
0, -1.5, -0.538365, 
0.367454, -0.683812, -0.538365, 
0, -0.683812, 1.96163, 
0, -1.5, 1.96163, 
-0.367454, -0.683812, 1.96163, 
0, -1.5, 1.96163, 
-0.75, -1.5, 1.96163, 
-0.367454, -0.683812, 1.96163, 
1.46982, -0.683812, -0.538365, 
1.5, -1.5, -0.538365, 
1.10236, -0.683812, -0.538365, 
1.5, -1.5, -0.538365, 
0.75, -1.5, -0.538365, 
1.10236, -0.683812, -0.538365, 
-1.46982, -0.683812, 3.21164, 
-1.5, -1.5, 3.21164, 
-1.10236, -0.683812, 3.21164, 
-1.5, -1.5, 3.21164, 
-0.75, -1.5, 3.21164, 
-1.10236, -0.683812, 3.21164, 
-1.46982, -0.683812, 0.711635, 
-1.5, -1.5, 0.711635, 
-1.10236, -0.683812, 0.711635, 
-1.5, -1.5, 0.711635, 
-0.75, -1.5, 0.711635, 
-1.10236, -0.683812, 0.711635, 
1.46982, -0.683812, 3.21164, 
1.5, -1.5, 3.21164, 
1.46982, -0.683812, 2.85631, 
1.5, -1.5, 3.21164, 
1.5, -1.5, 1.96163, 
1.46982, -0.683812, 2.85631, 
0, -0.683812, 0.711635, 
0, -1.5, 0.711635, 
0.367454, -0.683812, 0.711635, 
0, -1.5, 0.711635, 
0.75, -1.5, 0.711635, 
0.367454, -0.683812, 0.711635, 
0.734908, -0.683812, 1.96163, 
0.75, -1.5, 1.96163, 
0.367454, -0.683812, 1.96163, 
0.75, -1.5, 1.96163, 
0, -1.5, 1.96163, 
0.367454, -0.683812, 1.96163, 
-1.46982, -0.683812, -0.538365, 
-1.5, -1.5, -0.538365, 
-1.46982, -0.683812, 0.356309, 
-1.5, -1.5, -0.538365, 
-1.5, -1.5, 0.711635, 
-1.46982, -0.683812, 0.356309, 
0.734908, -0.683812, 0.711635, 
0.734908, 0.448138, 1.09792, 
0.367454, 0.448138, 1.09792, 
-1.10236, -0.683812, 0.711635, 
-1.10236, 0.448138, 1.09792, 
-1.46982, 0.448138, 1.09792, 
-0.367454, -0.683812, 2.85631, 
-0.367454, 0.448138, 2.97292, 
0, 0.448138, 2.97292, 
0.367454, -0.683812, 0.711635, 
0.367454, 0.448138, 1.09792, 
0, 0.448138, 1.09792, 
-0.734908, -0.683812, 2.85631, 
-0.734908, 0.448138, 2.97292, 
-0.367454, 0.448138, 2.97292, 
-0.734908, -0.683812, 0.711635, 
-0.734908, 0.448138, 1.09792, 
-1.10236, 0.448138, 1.09792, 
0.734908, -0.683812, 3.21164, 
0.734908, 0.448138, 3.39534, 
0.367454, 0.448138, 3.39534, 
0, -0.683812, 3.21164, 
0, 0.448138, 3.39534, 
-0.367454, 0.448138, 3.39534, 
0.367454, -0.683812, 2.85631, 
0.367454, 0.448138, 2.97292, 
0.734908, 0.448138, 2.97292, 
0.367454, -0.683812, 0.356309, 
0.367454, 0.448138, 0.472921, 
0.734908, 0.448138, 0.472921, 
0, -0.683812, 2.85631, 
0.367454, -0.683812, 2.85631, 
0.367454, -0.683812, 1.96163, 
0.367454, -0.683812, 2.85631, 
0.734908, -0.683812, 2.85631, 
0.734908, -0.683812, 1.96163, 
0.734908, -0.683812, 1.96163, 
0.734908, -0.683812, 2.85631, 
1.10236, -0.683812, 1.96163, 
1.10236, -0.683812, 2.85631, 
1.46982, -0.683812, 2.85631, 
1.46982, -0.683812, 1.96163, 
-0.367454, -0.683812, 2.85631, 
0, -0.683812, 2.85631, 
0, -0.683812, 1.96163, 
0.734908, -0.683812, 2.85631, 
1.10236, -0.683812, 2.85631, 
1.10236, -0.683812, 1.96163, 
1.10236, -0.683812, 2.85631, 
1.46982, -0.683812, 1.96163, 
1.10236, -0.683812, 1.96163, 
0.734908, -0.683812, 1.96163, 
0.367454, -0.683812, 1.96163, 
0.367454, -0.683812, 2.85631, 
0, -0.683812, 2.85631, 
0.367454, -0.683812, 1.96163, 
0, -0.683812, 1.96163, 
-1.10236, -0.683812, 2.85631, 
-0.734908, -0.683812, 2.85631, 
-0.734908, -0.683812, 1.96163, 
-0.734908, -0.683812, 2.85631, 
-0.367454, -0.683812, 2.85631, 
-0.367454, -0.683812, 1.96163, 
0, -0.683812, 1.96163, 
-0.367454, -0.683812, 1.96163, 
-0.367454, -0.683812, 2.85631, 
-0.734908, -0.683812, 2.85631, 
-0.367454, -0.683812, 1.96163, 
-0.734908, -0.683812, 1.96163, 
-1.46982, -0.683812, 1.96163, 
-1.46982, -0.683812, 2.85631, 
-1.10236, -0.683812, 2.85631, 
-0.734908, -0.683812, 1.96163, 
-1.10236, -0.683812, 1.96163, 
-1.10236, -0.683812, 2.85631, 
-0.367454, -0.683812, 3.21164, 
-0.367454, 0.448138, 3.39534, 
-0.734908, 0.448138, 3.39534, 
1.10236, -0.683812, 3.21164, 
1.10236, 0.448138, 3.39534, 
0.734908, 0.448138, 3.39534, 
1.10236, -0.683812, 0.711635, 
1.10236, 0.448138, 1.09792, 
0.734908, 0.448138, 1.09792, 
-1.46982, -0.683812, 3.21164, 
-1.46982, 0.448138, 3.39534, 
-1.46982, 0.448138, 2.97292, 
0.734908, -0.683812, 2.85631, 
0.734908, 0.448138, 2.97292, 
1.10236, 0.448138, 2.97292, 
1.10236, -0.683812, 2.85631, 
1.10236, 0.448138, 2.97292, 
1.46982, 0.448138, 2.97292, 
-1.46982, -0.683812, 0.356309, 
-1.46982, 0.448138, 0.472921, 
-1.10236, 0.448138, 0.472921, 
-1.46982, -0.683812, 0.711635, 
-1.46982, 0.448138, 1.09792, 
-1.46982, 0.448138, 0.472921, 
-1.10236, 0.448138, 3.39534, 
-0.734908, 0.448138, 3.39534, 
-1.10236, 0.448138, 2.97292, 
-0.734908, 0.448138, 3.39534, 
-0.367454, 0.448138, 3.39534, 
-0.734908, 0.448138, 2.97292, 
-1.10236, 0.448138, 3.39534, 
-1.10236, 0.448138, 2.97292, 
-1.46982, 0.448138, 2.97292, 
0, 0.448138, 3.39534, 
0.367454, 0.448138, 3.39534, 
0.367454, 0.448138, 2.97292, 
0.367454, 0.448138, 3.39534, 
0.734908, 0.448138, 3.39534, 
0.734908, 0.448138, 2.97292, 
1.10236, 0.448138, 2.97292, 
0.734908, 0.448138, 3.39534, 
1.10236, 0.448138, 3.39534, 
-1.46982, 0.448138, 3.39534, 
-1.10236, 0.448138, 3.39534, 
-1.46982, 0.448138, 2.97292, 
0.734908, 0.448138, 3.39534, 
1.10236, 0.448138, 2.97292, 
0.734908, 0.448138, 2.97292, 
1.10236, 0.448138, 2.97292, 
1.10236, 0.448138, 3.39534, 
1.46982, 0.448138, 2.97292, 
-1.10236, 0.448138, 2.97292, 
-0.734908, 0.448138, 3.39534, 
-0.734908, 0.448138, 2.97292, 
1.10236, 0.448138, 3.39534, 
1.46982, 0.448138, 3.39534, 
1.46982, 0.448138, 2.97292, 
-0.367454, 0.448138, 3.39534, 
0, 0.448138, 3.39534, 
-0.367454, 0.448138, 2.97292, 
-0.367454, 0.448138, 2.97292, 
-0.734908, 0.448138, 2.97292, 
-0.367454, 0.448138, 3.39534, 
0.734908, 0.448138, 2.97292, 
0.367454, 0.448138, 2.97292, 
0.367454, 0.448138, 3.39534, 
0.367454, 0.448138, 2.97292, 
0, 0.448138, 2.97292, 
0, 0.448138, 3.39534, 
0.367454, 0.448138, 1.09792, 
0.734908, 0.448138, 1.09792, 
0.734908, 0.448138, 0.472921, 
0.734908, 0.448138, 1.09792, 
1.10236, 0.448138, 1.09792, 
1.10236, 0.448138, 0.472921, 
1.10236, 0.448138, 1.09792, 
1.46982, 0.448138, 1.09792, 
1.46982, 0.448138, 0.472921, 
1.10236, 0.448138, 0.472921, 
0.734908, 0.448138, 0.472921, 
0.734908, 0.448138, 1.09792, 
0.734908, 0.448138, 0.472921, 
0.367454, 0.448138, 0.472921, 
0.367454, 0.448138, 1.09792, 
1.10236, 0.448138, 1.09792, 
1.46982, 0.448138, 0.472921, 
1.10236, 0.448138, 0.472921, 
-0.367454, 0.448138, 1.09792, 
0, 0.448138, 1.09792, 
0, 0.448138, 0.472921, 
0, 0.448138, 1.09792, 
0.367454, 0.448138, 1.09792, 
0.367454, 0.448138, 0.472921, 
0.367454, 0.448138, 0.472921, 
0, 0.448138, 0.472921, 
0, 0.448138, 1.09792, 
0, 0.448138, 0.472921, 
-0.367454, 0.448138, 0.472921, 
-0.367454, 0.448138, 1.09792, 
-1.10236, 0.448138, 1.09792, 
-0.734908, 0.448138, 1.09792, 
-0.734908, 0.448138, 0.472921, 
-0.734908, 0.448138, 1.09792, 
-0.367454, 0.448138, 1.09792, 
-0.367454, 0.448138, 0.472921, 
-0.367454, 0.448138, 0.472921, 
-0.734908, 0.448138, 0.472921, 
-0.734908, 0.448138, 1.09792, 
-0.734908, 0.448138, 0.472921, 
-1.10236, 0.448138, 0.472921, 
-1.10236, 0.448138, 1.09792, 
-1.46982, 0.448138, 0.472921, 
-1.46982, 0.448138, 1.09792, 
-1.10236, 0.448138, 1.09792, 
1.10236, -0.683812, 0.356309, 
1.10236, 0.448138, 0.472921, 
1.46982, 0.448138, 0.472921, 
1.46982, -0.683812, 0.711635, 
1.46982, 0.448138, 1.09792, 
1.10236, 0.448138, 1.09792, 
-0.367454, -0.683812, 0.711635, 
-0.367454, 0.448138, 1.09792, 
-0.734908, 0.448138, 1.09792, 
-1.46982, -0.683812, 0.356309, 
-1.10236, -0.683812, 0.356309, 
-1.46982, -0.683812, -0.538365, 
-1.10236, -0.683812, 0.356309, 
-0.734908, -0.683812, 0.356309, 
-1.10236, -0.683812, -0.538365, 
-1.46982, -0.683812, -0.538365, 
-1.10236, -0.683812, 0.356309, 
-1.10236, -0.683812, -0.538365, 
-0.367454, -0.683812, 0.356309, 
0, -0.683812, 0.356309, 
-0.367454, -0.683812, -0.538365, 
0, -0.683812, 0.356309, 
0.367454, -0.683812, 0.356309, 
0, -0.683812, -0.538365, 
-0.367454, -0.683812, 0.356309, 
-0.734908, -0.683812, -0.538365, 
-0.734908, -0.683812, 0.356309, 
-0.734908, -0.683812, -0.538365, 
-0.367454, -0.683812, 0.356309, 
-0.367454, -0.683812, -0.538365, 
0.367454, -0.683812, 0.356309, 
0.734908, -0.683812, 0.356309, 
0.367454, -0.683812, -0.538365, 
-1.10236, -0.683812, -0.538365, 
-0.734908, -0.683812, 0.356309, 
-0.734908, -0.683812, -0.538365, 
0, -0.683812, 0.356309, 
0, -0.683812, -0.538365, 
-0.367454, -0.683812, -0.538365, 
0.734908, -0.683812, 0.356309, 
1.10236, -0.683812, 0.356309, 
1.10236, -0.683812, -0.538365, 
1.10236, -0.683812, 0.356309, 
1.46982, -0.683812, 0.356309, 
1.46982, -0.683812, -0.538365, 
0.367454, -0.683812, -0.538365, 
0, -0.683812, -0.538365, 
0.367454, -0.683812, 0.356309, 
1.10236, -0.683812, 0.356309, 
1.46982, -0.683812, -0.538365, 
1.10236, -0.683812, -0.538365, 
1.10236, -0.683812, -0.538365, 
0.734908, -0.683812, -0.538365, 
0.734908, -0.683812, 0.356309, 
-1.46982, -0.683812, 2.85631, 
-1.46982, 0.448138, 2.97292, 
-1.10236, 0.448138, 2.97292, 
-1.10236, -0.683812, 3.21164, 
-1.10236, 0.448138, 3.39534, 
-1.46982, 0.448138, 3.39534, 
-0.734908, -0.683812, 3.21164, 
-0.734908, 0.448138, 3.39534, 
-1.10236, 0.448138, 3.39534, 
-1.10236, -0.683812, 2.85631, 
-1.10236, 0.448138, 2.97292, 
-0.734908, 0.448138, 2.97292, 
1.46982, -0.683812, 3.21164, 
1.46982, -0.683812, 2.85631, 
1.46982, 0.448138, 2.97292, 
-0.734908, -0.683812, 0.356309, 
-0.734908, 0.448138, 0.472921, 
-0.367454, 0.448138, 0.472921, 
-0.367454, -0.683812, 0.356309, 
-0.367454, 0.448138, 0.472921, 
0, 0.448138, 0.472921, 
1.5, -0.012616, -1.29664, 
1.5, -0.01187, -1.79552, 
-1.5, -0.01187, -1.79552, 
1.40499, -0.012615, -1.29687, 
1.39425, -1.51213, 3.22357, 
1.39425, -0.014191, 3.23072, 
1.5, -1.51056, -1.30379, 
1.40499, -0.012615, -1.29687, 
1.5, -0.012616, -1.29664, 
-1.4005, -0.012616, -1.29671, 
-1.39741, -1.51286, 3.19716, 
-1.4005, -1.51056, -1.30386, 
-1.5, -0.012616, -1.29664, 
-1.4005, -1.51056, -1.30386, 
-1.5, -1.51056, -1.30379, 
1.40499, -0.012615, -1.29687, 
1.40499, -1.51056, -1.30402, 
1.39425, -1.51213, 3.22357, 
1.5, -1.51056, -1.30379, 
1.40499, -1.51056, -1.30402, 
1.40499, -0.012615, -1.29687, 
-1.4005, -0.012616, -1.29671, 
-1.39741, -0.014921, 3.20432, 
-1.39741, -1.51286, 3.19716, 
-1.5, -0.012616, -1.29664, 
-1.4005, -0.012616, -1.29671, 
-1.4005, -1.51056, -1.30386, 
};
};