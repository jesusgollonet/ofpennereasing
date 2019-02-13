#ifndef _PENNER_QUART
#define _PENNER_QUART

class Quart {
	
	public:
		
		static float easeIn(float time,float begin , float change, float duration);
		static float easeOut(float time,float begin , float change, float duration);
		static float easeInOut(float time,float begin , float change, float duration);
};

#endif