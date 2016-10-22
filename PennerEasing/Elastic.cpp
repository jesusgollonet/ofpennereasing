#include "Elastic.h"

float Elastic::easeIn (float t, float b, float c, float d) {
	if (t==0) return b;
	if ((t/=d) == 1) return b+c;
	float p = d * 0.3f;
	float s = p/4.f;
	t -= 1;
	return -(c * pow(2, 10*t) * sin((t*d-s)*(2*PI)/p )) + b;
}

float Elastic::easeOut(float t, float b, float c, float d) {
	if (t==0) return b;
	if ((t/=d) == 1) return b + c;
	float p=d*.3f;
	float s=p/4;
	return (c * pow(2,-10*t) * sin( (t*d-s)*(2*PI)/p ) + c + b);
}

float Elastic::easeInOut(float t, float b, float c, float d) {
	if (t == 0) return b;
	if ((t/=d/2) == 2) return b+c;
	float p = d*(.3f*1.5f);
	float s = p/4;

	if (t < 1) {
		t -= 1;
		return -.5f*(c * pow(2, 10*t) * sin( (t*d-s)*(2*PI)/p )) + b;
	}

	t -= 1;
	return c * pow(2, -10*t) * sin( (t*d-s)*(2*PI)/p )*.5f + c + b;
}
