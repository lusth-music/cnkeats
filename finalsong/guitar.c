#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <songlib/util.h>
#include <songlib/songlib.h>

#define dir "/usr/local/share/samples/guitar-electric/"
#define base "clean_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "guitar";
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

int
main()
	{

	songInit();

	instrument = readScale(dir,base);
	openOutput("guitar.rra",0,0);

	setAmplitude(.03);
	setSustain(0.99992);

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
		c(1,H,instrument,octave);
		//c(1,Q,instrument,octave);
		rest(Q);
		/*
		c(1,Q,instrument,octave);
		//c(1,I,instrument,octave);
		c(6,Q,instrument,octave-1);
		c(4,Q,instrument,octave-1);
		c(5,Q,instrument,octave-1);
		
		c(1,Q,instrument,octave);
		//c(1,I,instrument,octave);
		c(6,Q,instrument,octave-1);
		c(4,Q,instrument,octave-1);
		c(5,Q,instrument,octave-1);
		*/
		
		c(1,H,instrument,octave);
		c(6,H,instrument,octave-1);
		c(4,H,instrument,octave-1);
		c(5,H,instrument,octave-1);
		
		rest(I);
		c(6,I,instrument,octave-1);
		c(4,I,instrument,octave-1);
		c(5,I,instrument,octave-1);
	}
	rest(H);
}

void chorus() {
	
	int i;
	
	rest(H);
	for (i = 0; i < 4; i++) {		
		/*c(1,H,instrument,octave);
		c(6,H,instrument,octave-1);
		c(4,H,instrument,octave-1);
		c(5,H,instrument,octave-1);
		rest(Q);
		rest(H);
		rest(H);*/
		c(1,Q,instrument,octave);
		c(6,Q,instrument,octave-1);
		c(4,H,instrument,octave-1);
		c(5,H,instrument,octave-1);
		
		c(1,Q,instrument,octave);
		c(6,Q,instrument,octave-1);
		c(4,H,instrument,octave-1);
		c(5,Q,instrument,octave-1);
		rest(H);
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
	rest(W);
}














