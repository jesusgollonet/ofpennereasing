#include "Quart.h"

float Quart::easeIn (float time,float begin , float change, float duration) {
	return change*(time/=duration)*time*time*time + begin;
}
float Quart::easeOut(float time,float begin , float change, float duration) {
	return -change * ((time=time/duration-1)*time*time*time - 1) + begin;
}

float Quart::easeInOut(float time,float begin , float change, float duration) {
	if ((time/=duration/2) < 1) return change/2*time*time*time*time + begin;
	return -change/2 * ((time-=2)*time*time*time - 2) + begin;
}