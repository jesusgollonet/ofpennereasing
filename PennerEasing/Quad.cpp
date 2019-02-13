#include "Quad.h"

float Quad::easeIn (float time,float begin , float change, float duration) {
	return change*(time/=duration)*time + begin;
}
float Quad::easeOut(float time,float begin , float change, float duration) {
	return -change *(time/=duration)*(time-2) + begin;
}

float Quad::easeInOut(float time,float begin , float change, float duration) {
	if ((time/=duration/2) < 1) return ((change/2)*(time*time)) + begin;
	return -change/2 * (((time-2)*(--time)) - 1) + begin;
	/*
	originally return -change/2 * (((time-2)*(--time)) - 1) + begin;
	
	I've had to swap (--time)*(time-2) due to diffence in behaviour in 
	pre-increment operators between java and change++, after hours
	of joy
	*/
	
}