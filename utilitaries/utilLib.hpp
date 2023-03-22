#pragma once
#include <math.h>

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))
#define CLAMP(value, min, max) (MIN((MAX(value, min)), max))



float cheapExp(float x);
float sigmoid(float x, float max, float midpoint, float steepness);
