#include "Elastic.h"

float Elastic::easeIn (float time,float begin , float change, float duration) {
	if (time==0) return begin;  if ((time/=duration)==1) return begin+change;  
	float p=duration*.3f;
	float a=change; 
	float s=p/4;
	float postFix =a*pow(2,10*(time-=1)); // this is a fix, again, with post-increment operators
	return -(postFix * sin((time*duration-s)*(2*PI)/p )) + begin;
}

float Elastic::easeOut(float time,float begin , float change, float duration) {
	if (time==0) return begin;  if ((time/=duration)==1) return begin+change;  
	float p=duration*.3f;
	float a=change; 
	float s=p/4;
	return (a*pow(2,-10*time) * sin( (time*duration-s)*(2*PI)/p ) + change + begin);	
}

float Elastic::easeInOut(float time,float begin , float change, float duration) {
	if (time==0) return begin;  if ((time/=duration/2)==2) return begin+change; 
	float p=duration*(.3f*1.5f);
	float a=change; 
	float s=p/4;
	 
	if (time < 1) {
		float postFix =a*pow(2,10*(time-=1)); // postIncrement is evil
		return -.5f*(postFix* sin( (time*duration-s)*(2*PI)/p )) + begin;
	} 
	float postFix =  a*pow(2,-10*(time-=1)); // postIncrement is evil
	return postFix * sin( (time*duration-s)*(2*PI)/p )*.5f + change + begin;
}