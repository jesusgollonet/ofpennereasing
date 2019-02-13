#include "Back.h"

float Back::easeIn (float t, float b, float c, float d) {
	float s = 1.70158f;
	t /= d;
	return c*t*t*((s+1)*t - s) + b;
}

float Back::easeOut(float t,float b , float c, float d) {
	float s = 1.70158f;
	t = t/d - 1;
	return c*(t*t*((s+1)*t + s) + 1) + b;
}

float Back::easeInOut(float t,float b , float c, float d) {
	float s = 1.70158f * 1.525f;
	if ((t/=d/2) < 1) {
		return c/2*(t*t*((s + 1.f)*t - s)) + b;
	}
	t -= 2;
	return c/2*(t*t*((s + 1.f)*t + s) + 2) + b;
}
