#include "Linear.h"

float Linear::easeIn (float t, float b, float c, float d) {
	return c*t/d + b;
}

float Linear::easeOut(float t, float b, float c, float d) {
	return c*t/d + b;
}

float Linear::easeInOut(float t, float b, float c, float d) {
	return c*t/d + b;
}
