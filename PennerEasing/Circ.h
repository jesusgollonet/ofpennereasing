#ifndef _PENNER_CIRC
#define _PENNER_CIRC

#include <math.h>

class Circ {
	
	public:
		
		static float easeIn(float time,float begin , float change, float duration);
		static float easeOut(float time,float begin , float change, float duration);
		static float easeInOut(float time,float begin , float change, float duration);
};

#endif