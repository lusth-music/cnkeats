#Place the names of all your tracks here (as RRA filenames)

RRA = piano.rra guitar.rra drums.rra
SRRA = piano.rra guitar.rra drums.rra
INCLUDE=/usr/local/include/songlib/
LIB=/usr/local/lib/

all : $(RRA)

%.rra	: %.x
		./$<

%.x	: %.c song
		gcc -Wall -o $@ -I$(INCLUDE) $< -L$(LIB) -lsong -lm 

mix.rra		: $(RRA)
		rrafastmixer $(RRA) > mix.rra

play	: $(RRA)
		rplay $(RRA)

playmix : mix.rra
		rplay mix.rra

s-rpiano.rra : rpiano.rra
		rrastereo -r rpiano.rra s-rpiano.rra

playmaster:  $(SRRA)
	rrafastmixer $(SRRA) | rramaster ! rplay

master.rra :  $(SRRA)
	rrafastmixer $(SRRA) | rramaster > master.rra

master.mp3 : master.rra
	rra2mp3 master.rra

rraidentity : rraidentity.c
		gcc -Wall -g -o rraidentity rraidentity.c -lsong -lm 

song : 


.PHONY : clean

clean :
		rm -f $(RRA) $(SRRA) master.rra mix.rra master.mp3