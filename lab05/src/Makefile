strlength: strlength.o
	gcc -Wall -std=c11 -o $@ $^ -lm
lawn: lawn.o
	gcc -Wall -std=c11 -o $@ $^ -lm
base2dec: base2dec.o
	gcc -Wall -std=c11 -o $@ $^ -lm

%.o:%.c
	gcc -c $<

.PHONY: 	clean install 

clean:
	rm -i *.o strlength
	rm -i *.o lawn
	rm -i *.o base2dec

install:
	mv strlength ../bin/
	mv lawn ../bin/