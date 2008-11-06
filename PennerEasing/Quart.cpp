#include "Quart.h"

float Quart::easeIn (float t,float b , float c, float d) {
	return c*(t/=d)*t*t*t + b;
}
float Quart::easeOut(float t,float b , float c, float d) {
	return -c * ((t=t/d-1)*t*t*t - 1) + b;
}

float Quart::easeInOut(float t,float b , float c, float d) {
	if ((t/=d/2) < 1) return c/2*t*t*t*t + b;
	return -c/2 * ((t-=2)*t*t*t - 2) + b;
}