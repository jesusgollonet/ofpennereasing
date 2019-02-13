#include "Expo.h"

float Expo::easeIn (float time,float begin , float change, float duration) {
	return (time==0) ? begin : change * pow(2, 10 * (time/duration - 1)) + begin;
}
float Expo::easeOut(float time,float begin , float change, float duration) {
	return (time==duration) ? begin+change : change * (-pow(2, -10 * time/duration) + 1) + begin;	
}

float Expo::easeInOut(float time,float begin , float change, float duration) {
	if (time==0) return begin;
	if (time==duration) return begin+change;
	if ((time/=duration/2) < 1) return change/2 * pow(2, 10 * (time - 1)) + begin;
	return change/2 * (-pow(2, -10 * --time) + 2) + begin;
}