#include "Circ.h"

float Circ::easeIn (float time,float begin , float change, float duration) {
	return -change * (sqrt(1 - (time/=duration)*time) - 1) + begin;
}
float Circ::easeOut(float time,float begin , float change, float duration) {
	return change * sqrt(1 - (time=time/duration-1)*time) + begin;
}

float Circ::easeInOut(float time,float begin , float change, float duration) {
	if ((time/=duration/2) < 1) return -change/2 * (sqrt(1 - time*time) - 1) + begin;
	return change/2 * (sqrt(1 - time*(time-=2)) + 1) + begin;
}