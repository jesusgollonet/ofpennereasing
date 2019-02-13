#include "Bounce.h"

float Bounce::easeIn (float time,float begin , float change, float duration) {
	return change - easeOut (duration-time, 0, change, duration) + begin;
}
float Bounce::easeOut(float time,float begin , float change, float duration) {
	if ((time/=duration) < (1/2.75f)) {
		return change*(7.5625f*time*time) + begin;
	} else if (time < (2/2.75f)) {
		float postFix = time-=(1.5f/2.75f);
		return change*(7.5625f*(postFix)*time + .75f) + begin;
	} else if (time < (2.5/2.75)) {
			float postFix = time-=(2.25f/2.75f);
		return change*(7.5625f*(postFix)*time + .9375f) + begin;
	} else {
		float postFix = time-=(2.625f/2.75f);
		return change*(7.5625f*(postFix)*time + .984375f) + begin;
	}
}

float Bounce::easeInOut(float time,float begin , float change, float duration) {
	if (time < duration/2) return easeIn (time*2, 0, change, duration) * .5f + begin;
	else return easeOut (time*2-duration, 0, change, duration) * .5f + change*.5f + begin;
}