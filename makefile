GCC=g++
STD=c++11

BINDIR=bin
SRCDIR=src
INCDIR=include
LIBDIR=lib

FLAGS=-std=$(STD) -Wall -L$(LIBDIR) -I$(INCDIR)
LIBS=-lutil

vpath %.hh include
vpath %.cc src

SOURCES=$(wildcard $(SRCDIR)/*.cc)

BIN=imagecleaner.exe

all :
	$(GCC) $(FLAGS) -o $(BINDIR)/$(BIN) $(SOURCES) $(LIBS)

.PHONY : clean

clean :
	rm -f $(BINDIR)/*
	rm -f *~
	rm -f $(SRCDIR)/*~
