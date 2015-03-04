#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"


#define dir "/usr/local/share/samples/"
#define base "piano/bright_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "rpiano";
char *PROGRAM_VERSION = "0.01";

int
main()
    {
    int instrument;
    int octave = 5;

    songInit();

    instrument = readScale(dir,base);

    setTempo(250);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.99995);
    setAmplitude(0.3);

    openOutput("rpiano.rra",0,0);

    c(1,W,instrument,octave);
    rest(W);
    c(1,W,instrument,octave);
    rest(W);
    c(1,Q,instrument,octave);
    c(1,Q,instrument,octave);
    c(6,Q,instrument,octave-1);
    b(1,W,instrument,octave,"x-x","xx-",SX);
    b(6,H,instrument,octave-1,"xxx","-xx",SX);
    ci2(4,Q,instrument,octave-1);
    ci2(5,W,instrument,octave-1);
    ci2(5,H,instrument,octave-1);
    ci2(5,Q,instrument,octave-1);
    rest(Q);
    c(5,H,instrument,octave-1);
    b(1,W,instrument,octave,"x-x","xx-",SX);
    b(6,H,instrument,octave-1,"xxx","-xx",SX);
    ci2(4,Q,instrument,octave-1);
    ci2(5,W,instrument,octave-1);
    ci2(5,H,instrument,octave-1);
    ci2(5,Q,instrument,octave-1);
    rest(Q);
    c(5,H,instrument,octave-1);
    b(1,W,instrument,octave,"x-x","xx-",SX);
    b(6,H,instrument,octave-1,"xxx","-xx",SX);
    ci2(4,Q,instrument,octave-1);
    ci2(5,W,instrument,octave-1);
    ci2(5,H,instrument,octave-1);
    ci2(5,Q,instrument,octave-1);
    rest(Q);
    c(5,H,instrument,octave-1);
    b(1,W,instrument,octave,"x-x","xx-",SX);
    b(6,H,instrument,octave-1,"xxx","-xx",SX);
    ci2(4,Q,instrument,octave-1);
    ci2(5,W,instrument,octave-1);
    rest(W*2);


    c(1,W,instrument,octave);
    c(6,W,instrument,octave-1);
    ci2(4,W,instrument,octave-1);
    ci2(5,W,instrument,octave-1);
    c(1,W,instrument,octave);
    c(6,W,instrument,octave-1);
    ci2(4,W,instrument,octave-1);
    ci2(5,W,instrument,octave-1);

    c(1,H,instrument,octave);
    c(1,H,instrument,octave);
    c(6,H,instrument,octave-1);
    c(6,H,instrument,octave-1);
    //c(1,Q,instrument,octave);
    c(6,Q,instrument,octave-1);
    ci2(4,Q,instrument,octave-1);
    ci2(5,Q,instrument,octave-1);
    c(6,Q,instrument,octave-1);
    ci2(4,Q,instrument,octave-1);
    ci2(5,Q,instrument,octave-1);
    c(1,H,instrument,octave);
    c(1,H,instrument,octave);
    c(1,H,instrument,octave);
    c(6,H,instrument,octave-1);
    c(6,H,instrument,octave-1);
    //c(1,Q,instrument,octave);
    c(6,Q,instrument,octave-1);
    ci2(4,Q,instrument,octave-1);
    ci2(5,Q,instrument,octave-1);
    c(6,Q,instrument,octave-1);
    ci2(4,Q,instrument,octave-1);
    ci2(5,Q,instrument,octave-1);
    c(1,H,instrument,octave);






    closeOutput();

    return 0;
    }
