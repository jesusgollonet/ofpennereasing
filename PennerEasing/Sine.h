#ifndef _PENNER_SINE
#define _PENNER_SINE

#include <math.h>

#ifndef PI
#define PI  3.14159265
#endif

class Sine {
	
	public:
		
		static float easeIn(float t,float b , float c, float d);
		static float easeOut(float t,float b , float c, float d);
		static float easeInOut(float t,float b , float c, float d);
		
};

#endif