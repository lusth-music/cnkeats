#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"


#define dir "/usr/local/share/samples/"
#define pianoInst "piano/bright_"
#define altosaxInst "/saxophone/alto-fluid_"
#define celloInst "/cello/drawn_"
#define harmonicaInst "/harmonica/drawn_"
#define recorderInst "/recorder/note_"
#define guitarInst "/guitar-electric/clean_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "rpiano";
char *PROGRAM_VERSION = "0.01";

int
main()
    {
    int piano;
    int sax;
    int cello;
    int harmonica;
    int recorder;
    int guitar;
    int octave = 4;

    songInit();

    piano = readScale(dir,pianoInst);
    sax = readScale(dir,altosaxInst);
    cello = readScale(dir,celloInst);
    harmonica = readScale(dir,harmonicaInst);
    recorder = readScale(dir,recorderInst);
    guitar = readScale(dir,guitarInst);

    setTempo(250);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.99995);
    setAmplitude(0.25);

    int location;

    openOutput("rpiano.rra",0,0);

/*
    rest(W);
    c(1,W,piano,octave);
    c(6,W,piano,octave-1);
    c(4,W,piano,octave-1);
    c(5,W,piano,octave-1);

    location = getLocation();
    c(1,W,piano,octave);
    c(6,W,piano,octave-1);
    c(4,W,piano,octave-1);
    c(5,W,piano,octave-1);
    setLocation(location);
    c(1,W,sax,octave);
    c(6,W,sax,octave-1);
    c(4,W,sax,octave-1);
    c(5,W,sax,octave-1);

    location = getLocation();
    c(1,W,piano,octave);
    c(6,W,piano,octave-1);
    c(4,W,piano,octave-1);
    c(5,W,piano,octave-1);
    setLocation(location);
    c(1,W,cello,octave);
    c(6,W,cello,octave-1);
    c(4,W,cello,octave-1);
    c(5,W,cello,octave-1);

    location = getLocation();
    c(1,W,piano,octave);
    c(6,W,piano,octave-1);
    c(4,W,piano,octave-1);
    c(5,W,piano,octave-1);
    setLocation(location);
    c(1,W,harmonica,octave);
    c(6,W,harmonica,octave-1);
    c(4,W,harmonica,octave-1);
    c(5,W,harmonica,octave-1);

    location = getLocation();
    c(1,W,piano,octave);
    c(6,W,piano,octave-1);
    c(4,W,piano,octave-1);
    c(5,W,piano,octave-1);
    setLocation(location);
    c(1,W,recorder,octave);
    c(6,W,recorder,octave-1);
    c(4,W,recorder,octave-1);
    c(5,W,recorder,octave-1);

    location = getLocation();
    c(1,W,piano,octave);
    c(6,W,piano,octave-1);
    c(4,W,piano,octave-1);
    c(5,W,piano,octave-1);
    setLocation(location);
    c(1,W,guitar,octave);
    c(6,W,guitar,octave-1);
    c(4,W,guitar,octave-1);
    c(5,W,guitar,octave-1);
*/

    rest(W);
    c(1,W,piano,octave);
    c(6,W,piano,octave-1);
    c(4,W,piano,octave-1);
    c(5,W,piano,octave-1);
    c(1,W,piano,octave);
    c(6,W,piano,octave-1);
    c(4,W,piano,octave-1);
    c(5,W,piano,octave-1);

int i = 0;
for (i = 0; i < 2; i++) {
    location = getLocation();
    c(1,W,piano,octave);
    c(6,W,piano,octave-1);
    c(4,W,piano,octave-1);
    c(5,W,piano,octave-1);
    setLocation(location);
    c(1,W,cello,octave);
    c(6,W,cello,octave-1);
    c(4,W,cello,octave-1);
    c(5,W,cello,octave-1);
}

for (i = 0; i < 1; i++) {
    location = getLocation();
    c(1,W,piano,octave);
    c(6,W,piano,octave-1);
    c(4,W,piano,octave-1);
    c(5,W,piano,octave-1);
    setLocation(location);
    c(1,W,cello,octave);
    c(6,W,cello,octave-1);
    c(4,W,cello,octave-1);
    c(5,W,cello,octave-1);
    setLocation(location);
    b(1,W,piano,octave,"x-x","xx-",SX);
    b(6,H,piano,octave-1,"xxx","-xx",SX);
    b(6,H,piano,octave-1,"xx-","-xx",SX);
    b(4,W,piano,octave-1,"x-x","xx-",SX);
    b(5,H,piano,octave-1,"xxx","-xx",SX);
    b(5,H,piano,octave-1,"xx-","-xx",SX);
}

for (i = 0; i < 2; i++) {
    location = getLocation();
    c(1,W,piano,octave);
    c(6,W,piano,octave-1);
    c(4,W,piano,octave-1);
    c(5,W,piano,octave-1);
    setLocation(location);
    c(1,W,cello,octave);
    c(6,W,cello,octave-1);
    c(4,W,cello,octave-1);
    c(5,W,cello,octave-1);
    setLocation(location);
    setAmplitude(.085);
    b(1,W,sax,octave,"x-x","xx-",SX);
    b(6,H,sax,octave-1,"xxx","-xx",SX);
    b(6,H,sax,octave-1,"xx-","-xx",SX);
    b(4,W,sax,octave-1,"x-x","xx-",SX);
    b(5,H,sax,octave-1,"xxx","-xx",SX);
    b(5,H,sax,octave-1,"xx-","-xx",SX);
    setAmplitude(.25);
    setLocation(location);
    b(1,W,piano,octave,"x-x","xx-",SX);
    b(6,H,piano,octave-1,"xxx","-xx",SX);
    b(6,H,piano,octave-1,"xx-","-xx",SX);
    b(4,W,piano,octave-1,"x-x","xx-",SX);
    b(5,H,piano,octave-1,"xxx","-xx",SX);
    b(5,H,piano,octave-1,"xx-","-xx",SX);
}
rest(W*3);

for (i = 0; i < 3; i++) {
    location = getLocation();
    c(1,W,piano,octave);
    b(6,W,piano,octave-1,"x-x","x--","xx-",SX);
    b(4,W,piano,octave-1,"xxx","-xx","xxx",SX);
    b(5,W,piano,octave-1,"xxx","xxx","x-x",SX);
    setLocation(location);
    setAmplitude(.125);
    c(1,W,cello,octave);
    c(6,W,cello,octave-1);
    c(4,W,cello,octave-1);
    c(5,W,cello,octave-1);
    setLocation(location);
    setAmplitude(.085);
    c(1,W,sax,octave+1);
    b(6,W,sax,octave,"x-x","x--","xx-",SX);
    b(4,W,sax,octave,"xxx","-xx","xxx",SX);
    b(5,W,sax,octave,"x--","x-x",SX);
    setAmplitude(.25);
}
    location = getLocation();
    c(1,W,piano,octave);
    setLocation(location);
    setAmplitude(.125);
    c(1,W,cello,octave);
    setLocation(location);
    setAmplitude(.085);
    c(1,W,sax,octave);
    setAmplitude(.25);


    closeOutput();

    return 0;
    }
