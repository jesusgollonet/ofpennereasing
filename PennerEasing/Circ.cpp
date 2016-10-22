#include "Circ.h"

float Circ::easeIn (float t,float b , float c, float d) {
	t /= d;
	return -c * (sqrt(1 - t*t) - 1) + b;
}
float Circ::easeOut(float t,float b , float c, float d) {
	t = t/d - 1.f;
	return c * sqrt(1 - t*t) + b;
}

float Circ::easeInOut(float t,float b , float c, float d) {
	if ((t/=d/2) < 1) return -c/2 * (sqrt(1 - t*t) - 1) + b;
	return c/2 * (sqrt(1 - t*(t - 2)) + 1) + b;
}
