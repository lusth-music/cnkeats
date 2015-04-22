#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <songlib/util.h>
#include <songlib/songlib.h>

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "drums";
char *PROGRAM_VERSION = "0.01";
int instrument = 0;
int octave = 3;
int location = 0;

void intro(void);
void verse1(void);
void chorus(void);
void verse2(void);
void bridge(void);
void outro(void);

int main(){

	songInit();

	openOutput("drums.rra",0,0);
	
	setAmplitude(0.10);
	setSustain(0.99995);

   
	#include "song"

	closeOutput();
	return 0;
}

void intro() {
	rest(W);
	rest(Q);
	rest(H*3);
	
	int i;
	for (i = 0; i < 3; i++) {
		rest(Q*7);
		rest(I*8);
		rest(H);
	}
}


void verse1() {
	int i;
	for (i = 0; i < 6; i++) {
		
		location = getLocation();
		drumkitKick  (1,1,"X-X-----",SX); setLocation(location);
		drumkitSnare (1,1,"X-X-----",SX);
		
		location = getLocation();
		drumkitKick  (1,1,"X---X---",SX); setLocation(location);
		drumkitSnare (1,1,"X---X---",SX);
		
		location = getLocation();
		drumkitKick  (1,1,"X---X---",SX); setLocation(location);
		drumkitSnare (1,1,"X---X---",SX);
		
		rest(Q);
		
	}
	location = getLocation();
	drumkitKick  (1,1,"X-X-----",SX); setLocation(location);
	drumkitSnare (1,1,"X-X-----",SX);
	
}

void chorus() {
	int i;
	
	
	for (i = 0; i < 4; i++) {
		
		location = getLocation();
		drumkitKick  (1,1,"------X-",SX); setLocation(location);
		drumkitSnare (1,1,"------X-",SX);
		
		location = getLocation();
		drumkitKick  (1,1,"-Xx-----",SX); setLocation(location);
		drumkitSnare (1,1,"-Xx-----",SX);
		
		location = getLocation();
		drumkitKick  (1,1,"X---X---",SX); setLocation(location);
		drumkitSnare (1,1,"X---X---",SX);
		
		rest(Q);
		
	}
}

void verse2() {
	verse1();
}

void bridge() {
	rest(H*5);
	
	int i;
	for (i = 0; i < 6; i++) {
		rest(W);
		rest(W);
	}
	rest(H);
}

void outro() {
	octave--;
	setAmplitude(.30);
	beginCrescendo(.6);
	verse1();
	endCrescendo();
	octave++;
}




