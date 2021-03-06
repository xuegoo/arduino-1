/*

  Project:       1Sheeld Library 
  File:          SkypeShield.h
                 
  Version:       1.0

  Compiler:      Arduino avr-gcc 4.3.2

  Author:        Integreight
                 
  Date:          2014.5

*/

#ifndef SkypeShield_h
#define SkypeShield_h

//Output Function ID's
#define SKYPE_CALL 		0x01
#define SKYPE_VIDEO_CALL  0x02

class SkypeShieldClass 
{

public:
	//Setters 
	void call(const char *);
	void videoCall(const char *);	

private:

};

//Extern Object
extern SkypeShieldClass Skype;
#endif