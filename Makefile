#
# Makefile for Dictionary Program
# Jan. 31, 2020

# some settings
CCC= g++ 
CCCFLAGS = -Wall -std=c++11 -lpthread -lX11

all : testDictionary
testDictionary : dictionary2.o testDictionary.o
	$(CCC) $(CCCFLAGS) $^ -o $@

# default rule for compiling .cc to .o
%.o: %.cc
	$(CCC) -c $(CCCFLAGS) $< 
testDictionary.o : dictionary2.h
dictionary2.o : dictionary2.h

clean:
	rm -f *.o *~ *% *# .#*

clean-all: clean
	rm -f testDictionary
