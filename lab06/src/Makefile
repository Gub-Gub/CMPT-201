 sec2hms: sec2hms.o
	gcc -Wall -std=c11 -o $@ $^ -lm
stats: stats.o
	gcc -Wall -std=c11 -o $@ $^ -lm
loadData: loadData.o
	gcc -Wall -std=c11 -o $@ $^ -lm

%.o:%.c
	gcc -c $<

.PHONY: clean install 

clean:
	rm -f *.o sec2hms
	rm -f *.o stats
	rm -f *.o loadData

install:
	mv sec2hms ../bin/
	mv stats ../bin/
	mv loadData ../bin/
	