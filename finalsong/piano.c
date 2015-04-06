#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"

#define dir "/usr/local/share/samples/"
#define pianoInst "piano/bright_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "piano";
char *PROGRAM_VERSION = "0.01";

int main()
    {
    int piano;
    int octave = 4;

    songInit();

    piano = readScale(dir,pianoInst);

    setTempo(250);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.99995);
    setAmplitude(0.25);

    int location;

    openOutput("piano.rra",0,0);

intro:;

verse:;

chorus:;

bridge:;

outro:;





    return 0;
}









