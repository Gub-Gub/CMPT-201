loggy: logConversion.o
	gcc -std=c11 -Wall -o $@ $^ -lm
triggy: trig.o
	gcc -std=c11 -Wall -o $@ $^ -lm
randy: randRange.o
	gcc -std=c11 -Wall -o $@ $^ -lm

#Converts .c file to .o
%.o:%.c
	gcc -c $<
.PHONY: clean install package
#remove objective files
clean:
	rm -f *.o loggy
	rm -f *.o triggy
	rm -f *.o randy
#moves executable program to bin
install:
	mv loggy ../bin/
	mv triggy ../bin/
	mv randy ../bin/
package:
	tar -cvzf tarAndcompress.tar.gz ../src/
#archives and compresses code in src folder