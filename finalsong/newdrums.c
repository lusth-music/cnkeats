#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <songlib/util.h>
#include <songlib/songlib.h>

#define dir1 "/usr/local/share/samples/vocals/"
#define base1 "doo_"


/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "newdrums";
char *PROGRAM_VERSION = "0.01";
void intro(void);
void verse1(void);
void verse2(void);
void bridge(void);

int main(){
	int instrument;
    int octave = 3;

    songInit();

    instrument = readScale(dir1,base1);
    openOutput("newdrums.rra",0,0);
    
    setAmplitude(0.4);
    setSustain(0.99995);

   
    #include "song"

    closeOutput();
    return 0;
}

void intro(){
    rest(Qd);
    int spot = getLocation();
    drumkitCrash (1,1,"x-------",SX); setLocation(spot);
    drumkitKick  (1,1,"x-------",SX); setLocation(spot);
    drumkitSnare (1,1,"x-------",SX); 

    spot = getLocation();
    drumkitCrash (1,1,"--------",SX); setLocation(spot);
    drumkitKick  (1,1,"--------",SX); setLocation(spot);
    drumkitSnare (1,1,"--------",SX);

    spot = getLocation();
    drumkitCrash (1,1,"x-------",SX); setLocation(spot);
    drumkitKick  (1,1,"x-------",SX); setLocation(spot);
    drumkitSnare (1,1,"x-------",SX);


    spot = getLocation();
    drumkitCrash (1,1,"-------X",SX); setLocation(spot);
    drumkitKick  (1,1,"xxxxXXX-",SX); setLocation(spot);
    drumkitSnare (1,1,"xxxxXXXX",SX);

    spot = getLocation();
    drumkitHHOpen  (1,1,"--x-x-x-",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--x---x-",SX); setLocation(spot);
    drumkitKick    (1,1,"-x--x---",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"x-x-x---",SX); setLocation(spot);
    drumkitCrash   (1,1,"-------x",SX); setLocation(spot);
    drumkitSnare   (1,1,"--xx--x-",SX); setLocation(spot);
    drumkitKick    (1,1,"xx--x--x",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"--x-x-x-",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--x---x-",SX); setLocation(spot);
    drumkitKick    (1,1,"-x--x---",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"x-x-x---",SX); setLocation(spot);
    drumkitCrash   (1,1,"-------x",SX); setLocation(spot);
    drumkitSnare   (1,1,"--xx--x-",SX); setLocation(spot);
    drumkitKick    (1,1,"xx--x--x",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"--x-x-x-",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--x---x-",SX); setLocation(spot);
    drumkitKick    (1,1,"-x--x---",SX);     

    spot = getLocation();
    drumkitHHOpen  (1,1,"x-x-x---",SX); setLocation(spot);
    drumkitCrash   (1,1,"-------x",SX); setLocation(spot);
    drumkitSnare   (1,1,"--xx--x-",SX); setLocation(spot);
    drumkitKick    (1,1,"xx--x--x",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"--x-x-x-",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--x---x-",SX); setLocation(spot);
    drumkitKick    (1,1,"-x--x---",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"x-x-x---",SX); setLocation(spot);
    drumkitCrash   (1,1,"-------x",SX); setLocation(spot);
    drumkitSnare   (1,1,"--xx--x-",SX); setLocation(spot);
    drumkitKick    (1,1,"xx--x--x",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"--x-x-x-",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--x---x-",SX); setLocation(spot);
    drumkitKick    (1,1,"-x--x---",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"x-x-x---",SX); setLocation(spot);
    drumkitCrash   (1,1,"-------x",SX); setLocation(spot);
    drumkitSnare   (1,1,"--xx--x-",SX); setLocation(spot);
    drumkitKick    (1,1,"xx--x--x",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"--x-x-x-",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--x---x-",SX); setLocation(spot);
    drumkitKick    (1,1,"-x--x---",SX);

    spot = getLocation();
    drumkitHHOpen  (1,1,"x-x-x-x-",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--x---x-",SX); setLocation(spot);
    drumkitKick    (1,1,"-x--x---",SX);
}


void verse1(){
    int i;
    int spot;

    spot = getLocation();
        drumkitHHOpen  (1,1,"x-x-x-x-",SX); setLocation(spot);
        drumkitCrash   (1,1,"--------",SX); setLocation(spot);
        drumkitSnare   (1,1,"--x---x-",SX); setLocation(spot);
        drumkitKick    (1,1,"-x--x---",SX); 

        spot = getLocation();
        drumkitHHOpen  (1,1,"x-x-x---",SX); setLocation(spot);
        drumkitCrash   (1,1,"-------x",SX); setLocation(spot);
        drumkitSnare   (1,1,"--xx--x-",SX); setLocation(spot);
        drumkitKick    (1,1,"xx--x--x",SX); 
    
    for (i = 0; i < 7; i++){
        spot = getLocation();
        drumkitHHOpen  (1,1,"--x-x-x-",SX); setLocation(spot);
        drumkitCrash   (1,1,"--------",SX); setLocation(spot);
        drumkitSnare   (1,1,"--x---x-",SX); setLocation(spot);
        drumkitKick    (1,1,"-x--x---",SX); 

        spot = getLocation();
        drumkitHHOpen  (1,1,"x-x-x---",SX); setLocation(spot);
        drumkitCrash   (1,1,"-------x",SX); setLocation(spot);
        drumkitSnare   (1,1,"--xx--x-",SX); setLocation(spot);
        drumkitKick    (1,1,"xx--x--x",SX); 
    }
}

void verse2(){
    verse1();
}

void bridge(){
    int i;
    int spot;
    
    
    spot = getLocation();
    drumkitHHOpen  (1,1,"--------",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--f---f-",SX); setLocation(spot);
    drumkitKick    (1,1,"x----x-x",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"--------",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--f---f-",SX); setLocation(spot);
    drumkitKick    (1,1,"-x---x--",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"--------",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--f---f-",SX); setLocation(spot);
    drumkitKick    (1,1,"x----x-x",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"--------",SX); setLocation(spot);
    drumkitCrash   (1,1,"-------x",SX); setLocation(spot);
    drumkitSnare   (1,1,"--f---f-",SX); setLocation(spot);
    drumkitKick    (1,1,"-x---x-x",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"--x-x-x-",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--xx--xx",SX); setLocation(spot);
    drumkitKick    (1,1,"-x--xx--",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"x-x-x---",SX); setLocation(spot);
    drumkitCrash   (1,1,"-------x",SX); setLocation(spot);
    drumkitSnare   (1,1,"--xx--x-",SX); setLocation(spot);
    drumkitKick    (1,1,"xx--xx-x",SX);

    spot = getLocation();
    drumkitHHOpen  (1,1,"--------",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--f---f-",SX); setLocation(spot);
    drumkitKick    (1,1,"x----x-x",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"--------",SX); setLocation(spot);
    drumkitCrash   (1,1,"-------x",SX); setLocation(spot);
    drumkitSnare   (1,1,"--f---f-",SX); setLocation(spot);
    drumkitKick    (1,1,"-x---x-x",SX); 
    
    for(i = 0; i < 2; i++){
        spot = getLocation();
        drumkitHHOpen  (1,1,"--x-x-x-",SX); setLocation(spot);
        drumkitCrash   (1,1,"--------",SX); setLocation(spot);
        drumkitSnare   (1,1,"--xx--xx",SX); setLocation(spot);
        drumkitKick    (1,1,"-x--xx--",SX); 

        spot = getLocation();
        drumkitHHOpen  (1,1,"x-x-x---",SX); setLocation(spot);
        drumkitCrash   (1,1,"-------x",SX); setLocation(spot);
        drumkitSnare   (1,1,"--xx--x-",SX); setLocation(spot);
        drumkitKick    (1,1,"xx--xx-x",SX); 
    }

    spot = getLocation();
    drumkitHHOpen  (1,1,"--------",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--f---f-",SX); setLocation(spot);
    drumkitKick    (1,1,"x----x-x",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"--------",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--f---f-",SX); setLocation(spot);
    drumkitKick    (1,1,"-x---x--",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"--------",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--f---f-",SX); setLocation(spot);
    drumkitKick    (1,1,"x----x-x",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"--------",SX); setLocation(spot);
    drumkitCrash   (1,1,"---X----",SX); setLocation(spot);
    drumkitSnare   (1,1,"-f----x-",SX); setLocation(spot);
    drumkitKick    (1,1,"---x-x--",SX); setLocation(spot);
    drumkitTomHi   (1,1,"--x-----",SX); setLocation(spot);
    drumkitTom     (1,1,"--------",SX); setLocation(spot);
    drumkitTomLo   (1,1,"--x-----",SX);

}