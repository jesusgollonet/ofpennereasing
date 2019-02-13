#include "Sine.h"

float Sine::easeIn (float time,float begin , float change, float duration) {
	return -change * cos(time/duration * (PI/2)) + change + begin;
}
float Sine::easeOut(float time,float begin , float change, float duration) {	
	return change * sin(time/duration * (PI/2)) + begin;	
}

float Sine::easeInOut(float time,float begin , float change, float duration) {
	return -change/2 * (cos(PI*time/duration) - 1) + begin;
}