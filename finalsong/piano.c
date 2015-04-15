#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"

#define dir "/usr/local/share/samples/piano/"
#define pianoInst "bright_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "piano";
char *PROGRAM_VERSION = "0.01";

int main()
    {
    int instrument;
    int octave = 4;

    songInit();

    instrument = readScale(dir,pianoInst);

    setTempo(250);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.99995);
    setAmplitude(0.25);

    openOutput("piano.rra",0,0);


    c(1,W,instrument,octave);

goto intro;

intro:;
    c(1,W,instrument,octave);
    goto verse;

verse:;
    goto chorus;

chorus:;
    goto bridge;

bridge:;
    goto outro;

outro:;





    return 0;
}









