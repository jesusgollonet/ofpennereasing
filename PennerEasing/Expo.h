#ifndef _PENNER_EXPO
#define _PENNER_EXPO

#include <math.h>

class Expo {
	
	public:
		
		static float easeIn(float t,float b , float c, float d);
		static float easeOut(float t,float b , float c, float d);
		static float easeInOut(float t,float b , float c, float d);
};

#endif