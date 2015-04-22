#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <songlib/util.h>
#include <songlib/songlib.h>

#define dir "/usr/local/share/samples/piano/"
#define base "bright_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "piano";
char *PROGRAM_VERSION = "0.01";
int instrument = 0;
int octave = 5;
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
	openOutput("piano.rra",0,0);

	setAmplitude(.15);
	setSustain(0.99985);

	#include "song"
	
	closeOutput();
	return 0;
}


void intro() {
	rest(W);
	
	c(1,Q,instrument,octave);
	c(6,H,instrument,octave-1);
	c(4,H,instrument,octave-1);
	c(5,H,instrument,octave-1);
	
	int i;
	for (i = 0; i < 3; i++) {
		c(1,Q,instrument,octave);
		rest(H);
		c(1,I,instrument,octave);
		c(1,I,instrument,octave);
		c(6,Q,instrument,octave-1);
		c(4,Q,instrument,octave-1);
		c(5,Q,instrument,octave-1);
		
		c(1,I,instrument,octave);
		c(1,I,instrument,octave);
		c(6,Q,instrument,octave-1);
		c(4,Q,instrument,octave-1);
		c(5,Q,instrument,octave-1);
		
		rest(I);
		c(6,I,instrument,octave-1);
		c(4,I,instrument,octave-1);
		c(5,I,instrument,octave-1);
	}
}

void verse1() {
	
	octave--;
	
	int i;
	for (i = 0; i < 2; i++) {
		c(1,Q,instrument,octave);
		c(1,Q,instrument,octave);
		rest(Q);
		c(1,I,instrument,octave);
		c(1,I,instrument,octave);
		c(6,Q,instrument,octave-1);
		c(4,Q,instrument,octave-1);
		c(5,Q,instrument,octave-1);
		
		c(1,I,instrument,octave);
		c(1,I,instrument,octave);
		c(6,Q,instrument,octave-1);
		c(4,Q,instrument,octave-1);
		c(5,Q,instrument,octave-1);
		
		rest(I);
		c(6,I,instrument,octave-1);
		c(4,I,instrument,octave-1);
		c(5,I,instrument,octave-1);
	}
	
	octave++;
	
	location = getLocation();
	for (i = 0; i < 4; i++) {
		c(1,Q,instrument,octave);
		c(1,Q,instrument,octave);
		rest(Q);
		c(1,I,instrument,octave);
		c(1,I,instrument,octave);
		c(6,Q,instrument,octave-1);
		c(4,I,instrument,octave-1);
		c(4,I,instrument,octave-1);
		c(5,Q,instrument,octave-1);
		
		c(1,Q,instrument,octave);
		c(6,I,instrument,octave-1);
		c(6,I,instrument,octave-1);
		c(4,Q,instrument,octave-1);
		c(5,Q,instrument,octave-1);
		
		rest(I);
		c(6,I,instrument,octave-1);
		c(4,I,instrument,octave-1);
		c(5,I,instrument,octave-1);
	}
	c(1,Q,instrument,octave);
	c(1,Q,instrument,octave);
	
	setLocation(location);
	octave--;
	for (i = 0; i < 4; i++) {
		c(1,Q,instrument,octave);
		c(1,Q,instrument,octave);
		rest(Q);
		c(1,I,instrument,octave);
		c(1,I,instrument,octave);
		c(6,Q,instrument,octave-1);
		c(4,I,instrument,octave-1);
		c(4,I,instrument,octave-1);
		c(5,Q,instrument,octave-1);
		
		c(1,Q,instrument,octave);
		c(6,I,instrument,octave-1);
		c(6,I,instrument,octave-1);
		c(4,Q,instrument,octave-1);
		c(5,Q,instrument,octave-1);
		
		rest(I);
		c(6,I,instrument,octave-1);
		c(4,I,instrument,octave-1);
		c(5,I,instrument,octave-1);
	}
	c(1,Q,instrument,octave);
	c(1,Q,instrument,octave);
	
	octave++;
	
}

void chorus() {
	int i;
	
	rest(H);
	location = getLocation();
	for (i = 0; i < 4; i++) {
		c(1,Q,instrument,octave);
		c(6,Q,instrument,octave-1);
		c(4,Q,instrument,octave-1);
		c(5,Q,instrument,octave-1);
		c(4,I,instrument,octave-1);
		c(5,Q,instrument,octave-1);
		rest(I);
		
		c(1,Q,instrument,octave);
		c(6,Q,instrument,octave-1);
		c(4,I,instrument,octave-1);
		c(5,Q,instrument,octave-1);
		c(4,I,instrument,octave-1);
		c(5,Q,instrument,octave-1);
		rest(H);
	}
	
	octave--;
	
	setLocation(location);
	for (i = 0; i < 4; i++) {
		c(1,Q,instrument,octave);
		c(6,Q,instrument,octave-1);
		c(4,Q,instrument,octave-1);
		c(5,Q,instrument,octave-1);
		c(4,I,instrument,octave-1);
		c(5,Q,instrument,octave-1);
		rest(I);
		
		c(1,Q,instrument,octave);
		c(6,Q,instrument,octave-1);
		c(4,I,instrument,octave-1);
		c(5,Q,instrument,octave-1);
		c(4,I,instrument,octave-1);
		c(5,Q,instrument,octave-1);
		rest(H);
	}
	octave++;
	
}

void verse2() {
	verse1();
}

void bridge() {
	
	octave--;
	rest(H);
	c(1,H,instrument,octave);
    c(6,H,instrument,octave-1);
    c(4,H,instrument,octave-1);
    c(5,H,instrument,octave-1);
	
	int i;
	for (i = 0; i < 2; i++) {
		b(1,H,instrument,octave,"x-x","xx-",SX);
		b(6,Q,instrument,octave-1,"xxx","-xx",SX);
		b(6,Q,instrument,octave-1,"xx-","-xx",SX);
		b(4,H,instrument,octave-1,"x-x","xx-",SX);
		b(5,Q,instrument,octave-1,"xxx","-xx",SX);
		b(5,Q,instrument,octave-1,"xx-","-xx",SX);
	}
	
	for (i = 0; i < 4; i++) {
		b(1,H,instrument,octave,"x-x","xx-",SX);
		b(6,Q,instrument,octave-1,"xxx","-xx",SX);
		b(6,Q,instrument,octave-1,"xx-",SX);
		b(4,H,instrument,octave-1,"x-x","xx-",SX);
		b(5,Q,instrument,octave-1,"xxx","-xx",SX);
		b(5,Q,instrument,octave-1,"xx-",SX);
	}
	
	c(1,H,instrument,octave);
	
	octave++;
}

void outro() {
	octave--;
	setAmplitude(.40);
	beginCrescendo(.6);
	verse1();
	endCrescendo();
	octave++;
}
