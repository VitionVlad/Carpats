#include <iostream>

class saloon_normals {
public:
float normals [16383] = {
0, 1, 0.0003, 
0, 1, 0.0003, 
0, 1, 0.0003, 
-0, -1, -0.0003, 
-0, -1, -0.0003, 
-0, -1, -0.0003, 
-0.0024, -0.0048, 1, 
-0.0024, -0.0048, 1, 
-0.0024, -0.0048, 1, 
-0, -1, -0.0005, 
-0, -1, -0.0005, 
-0, -1, -0.0005, 
0, 1, 0.0005, 
0, 1, 0.0005, 
0, 1, 0.0005, 
0.0007, -0.0048, 1, 
0.0007, -0.0048, 1, 
0.0007, -0.0048, 1, 
0, 1, 0.0003, 
0, 1, 0.0003, 
0, 1, 0.0003, 
-0, -1, -0.0003, 
-0, -1, -0.0003, 
-0, -1, -0.0003, 
-0.0024, -0.0048, 1, 
-0.0024, -0.0048, 1, 
-0.0024, -0.0048, 1, 
-0, -1, -0.0005, 
-0, -1, -0.0005, 
-0, -1, -0.0005, 
0, 1, 0.0005, 
0, 1, 0.0005, 
0, 1, 0.0005, 
0.0007, -0.0048, 1, 
0.0007, -0.0048, 1, 
0.0007, -0.0048, 1, 
0, 0.9999, -0.0138, 
0, 0.9999, -0.0138, 
0, 0.9999, -0.0138, 
0, 0, 0, 
0, -0.0048, 1, 
0, -0.0048, 1, 
0, 0.9999, -0.0138, 
0, 0.9999, -0.0138, 
0, 0.9999, -0.0138, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0.9993, 0.037, 0, 
0.9993, 0.037, 0, 
0.9993, 0.037, 0, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0.9999, -0.0138, 
0, 0.9999, -0.0138, 
0, 0.9999, -0.0138, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0.9999, -0.0138, 
0, 0.9999, -0.0138, 
0, 0.9999, -0.0138, 
-0.9993, 0.037, 0, 
-0.9993, 0.037, 0, 
-0.9993, 0.037, 0, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0.9993, 0.037, 0, 
0.9993, 0.037, 0, 
0.9993, 0.037, 0, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
-0.9993, 0.037, 0, 
-0.9993, 0.037, 0, 
-0.9993, 0.037, 0, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
-1, 0, 0, 
-1, 0, 0, 
-1, 0, 0, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
-1, 0, 0, 
-1, 0, 0, 
-1, 0, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 1, 0.0015, 
0, 1, 0.0015, 
0, 1, 0.0015, 
0, 0.9999, -0.0138, 
0, 0.9999, -0.0138, 
0, 0.9999, -0.0138, 
0, 0, 0, 
0, 0, 0, 
0, -0.0048, 1, 
0, -0.0048, 1, 
0, -0.0048, 1, 
0, -0.0048, 1, 
0, -0.0048, 1, 
0, 0.9999, -0.0138, 
0.0034, 0.0048, -1, 
0, -0.0048, 1, 
0, -0.0048, 1, 
0, 0, 0, 
0, 0.9999, -0.0138, 
0, 0.9999, -0.0138, 
0, 0.9999, -0.0138, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0.9993, 0.037, 0, 
0.9993, 0.037, 0, 
0.9993, 0.037, 0, 
0.9993, 0.037, 0, 
0.9993, 0.037, 0, 
0.9993, 0.037, 0, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0.9999, -0.0138, 
0, 0.9999, -0.0138, 
0, 0.9999, -0.0138, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0.9999, -0.0138, 
0, 0.9999, -0.0138, 
0, 0.9999, -0.0138, 
-0.9993, 0.037, 0, 
-0.9993, 0.037, 0, 
-0.9993, 0.037, 0, 
-0.9993, 0.037, 0, 
-0.9993, 0.037, 0, 
-0.9993, 0.037, 0, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
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
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0.9993, 0.037, 0, 
0.9993, 0.037, 0, 
0.9993, 0.037, 0, 
0.9993, 0.037, 0, 
0.9993, 0.037, 0, 
0.9993, 0.037, 0, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, 1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
0, 0, -1, 
-0.9993, 0.037, 0, 
-0.9993, 0.037, 0, 
-0.9993, 0.037, 0, 
-0.9993, 0.037, 0, 
-0.9993, 0.037, 0, 
-0.9993, 0.037, 0, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
-1, 0, 0, 
-1, 0, 0, 
-1, 0, 0, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
-1, 0, 0, 
-1, 0, 0, 
-1, 0, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, -0.323, 0.9464, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 1, 0, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, -0.1602, 0.9871, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 0.1025, -0.9947, 
0, 1, 0.0015, 
0, 1, 0.0015, 
0, 1, 0.0015, 
-0.7064, 0.0034, -0.7078, 
-1, 0, -0.0024, 
-1, 0, -0.0024, 
0.0023, 0.9999, -0.0138, 
-0.7064, 0.0034, -0.7078, 
0.0034, 0.0048, -1, 
0.7076, 0.0034, -0.7066, 
1, 0, -0.0007, 
0.7057, 0.0034, -0.7085, 
0, 0, 0, 
0.7057, 0.0034, -0.7085, 
0, 0, 0, 
-0.7064, 0.0034, -0.7078, 
-0.7044, 0.0034, -0.7098, 
-1, 0, -0.0024, 
0.0023, 0.9999, -0.0138, 
-0.7044, 0.0034, -0.7098, 
-0.7064, 0.0034, -0.7078, 
0.7076, 0.0034, -0.7066, 
1, 0, -0.0007, 
1, 0, -0.0007, 
0, 0, 0, 
0.7076, 0.0034, -0.7066, 
0.7057, 0.0034, -0.7085, 
};
};