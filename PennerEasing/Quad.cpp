#include "Quad.h"

float Quad::easeIn (float t, float b, float c, float d) {
	t /= d;
	return c * t * t + b;
}

float Quad::easeOut(float t, float b, float c, float d) {
	t /= d;
	return -c * t * (t - 2) + b;
}

float Quad::easeInOut(float t, float b, float c, float d) {
	if ((t/=d/2) < 1) return ((c/2)*(t*t)) + b;

	//TODO: not sure if correct
	return -c / 2 * ( ( (t - 2) * (t - 1)) - 1) + b;
}
