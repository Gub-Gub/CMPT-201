strlength: strlength.o
	gcc -Wall -std=c11 -o $@ $^ -lm
lawn: lawn.o
	gcc -Wall -std=c11 -o $@ $^ -lm
base2dec: base2dec.o
	gcc -Wall -std=c11 -o $@ $^ -lm
randomSentence: randomSentence.o
	gcc -Wall -std=c11 -o $@ $^ -lm

%.o:%.c
	gcc -c $<

.PHONY: clean install 

clean:
	rm -f *.o strlength
	rm -f *.o lawn
	rm -f *.o base2dec
	rm -f *.o randomSentence

install:
	mv strlength ../bin/
	mv lawn ../bin/
	mv base2dec ../bin/
	mv randomSentence ../bin/