#ifndef _PENNER_LINEAR
#define _PENNER_LINEAR


class Linear {
	
	public:
		
		static float easeNone(float time,float begin , float change, float duration); // ??
		static float easeIn(float time,float begin , float change, float duration);
		static float easeOut(float time,float begin , float change, float duration);
		static float easeInOut(float time,float begin , float change, float duration);
		
};

#endif