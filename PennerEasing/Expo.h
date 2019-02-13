#ifndef _PENNER_EXPO
#define _PENNER_EXPO

#include <math.h>

class Expo {
	
	public:
		
		static float easeIn(float time,float begin , float change, float duration);
		static float easeOut(float time,float begin , float change, float duration);
		static float easeInOut(float time,float begin , float change, float duration);
};

#endif