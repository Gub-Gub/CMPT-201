# variables

cc = gcc
CFLAG = -Wall -std=c11
LDFLAGS = -lm
TARGET = testPointer
OBJS = test_pointerFun.o pointerFun.o 

.PHONY: all clean install

# set target
all: $(TARGET)

# build executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LDFLAGS)
	
# compile source files to object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# clean up files
clean:
	rm -i $(OBJS) $(TARGET)

# install executable file
install: $(TARGET)
	mv $(TARGET) ../bin/