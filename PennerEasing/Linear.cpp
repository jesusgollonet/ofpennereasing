#include "Linear.h"

float Linear::easeNone (float time,float begin , float change, float duration) {
	return change*time/duration + begin;
}
float Linear::easeIn (float time,float begin , float change, float duration) {
	return change*time/duration + begin;
}
float Linear::easeOut(float time,float begin , float change, float duration) {	
	return change*time/duration + begin;
}

float Linear::easeInOut(float time,float begin , float change, float duration) {
	return change*time/duration + begin;
}