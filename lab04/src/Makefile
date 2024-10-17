checkFilename: checkFilename.o
	gcc -std=c11 -Wall -o $@ $^ -lm

checkformat: checkformat.o
	gcc -std=c11 -Wall -o $@ $^ -lm
contains: contains.o
	gcc -std=c11 -Wall -o $@ $^ -lm

%.o:%.c
	gcc -c $<

.PHONY: clean install

clean:
	rm -f *.o checkFilename
	rm -f *.o checkformat
	rm -f *.o contains

install:
	mv checkFilename ../bin/
	mv checkformat ../bin/
	mv contains ../bin/
