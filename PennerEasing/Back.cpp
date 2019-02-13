#include "Back.h"

float Back::easeIn (float time,float begin , float change, float duration) {
	float s = 1.70158f;
	float postFix = time/=duration;
	return change*(postFix)*time*((s+1)*time - s) + begin;
}
float Back::easeOut(float time,float begin , float change, float duration) {	
	float s = 1.70158f;
	return change*((time=time/duration-1)*time*((s+1)*time + s) + 1) + begin;
}

float Back::easeInOut(float time,float begin , float change, float duration) {
	float s = 1.70158f;
	if ((time/=duration/2) < 1) return change/2*(time*time*(((s*=(1.525f))+1)*time - s)) + begin;
	float postFix = time-=2;
	return change/2*((postFix)*time*(((s*=(1.525f))+1)*time + s) + 2) + begin;
}