#ifndef _PENNER_ELASTIC
#define _PENNER_ELASTIC

#include <math.h>

#ifndef PI
#define PI  3.14159265
#endif

class Elastic {
	
	public:
		
		static float easeIn(float t,float b , float c, float d);
		static float easeOut(float t,float b , float c, float d);
		static float easeInOut(float t,float b , float c, float d);
};

#endif