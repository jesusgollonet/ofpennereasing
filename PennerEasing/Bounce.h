#ifndef _PENNER_BOUNCE
#define _PENNER_BOUNCE

class Bounce {
	
	public:
		
		static float easeIn(float time,float begin , float change, float duration);
		static float easeOut(float time,float begin , float change, float duration);
		static float easeInOut(float time,float begin , float change, float duration);
};

#endif