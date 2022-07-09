GCC=g++
STD=c++11

BINDIR=../bin
OBJDIR=../obj
SRCDIR=.
INCDIR=../inc
LIBDIR=../lib

FLAGS=-std=$(STD) -Wall -L$(LIBDIR) -I$(INCDIR)
LIBS=-lutil

SOURCES=$(wildcard *.cc)
OBJECTS=$(patsubst %.cc, %.o,$(SOURCES))

BIN=imagecleaner.exe

all : make-directories $(OBJECTS)
	$(GCC) $(FLAGS) -o $(BINDIR)/$(BIN) $(SOURCES) $(LIBS)

%.o : %.cc
	$(GCC) $(FLAGS) -c $< $(LIBS)
	mv $@ $(OBJDIR)/

make-directories :
	mkdir $(BINDIR) $(OBJDIR)

.PHONY : clean

clean :
	rm -rf $(BINDIR) $(OBJDIR)
	rm -f *~
