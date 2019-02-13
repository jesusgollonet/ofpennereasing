#ifndef _PENNER_ELASTIC
#define _PENNER_ELASTIC

#include <math.h>

#ifndef PI
#define PI  3.14159265
#endif

class Elastic {
	
	public:
		
		static float easeIn(float time,float begin , float change, float duration);
		static float easeOut(float time,float begin , float change, float duration);
		static float easeInOut(float time,float begin , float change, float duration);
};

#endif