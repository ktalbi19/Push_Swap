# Makefile for lib
CC = gcc
AR = ar

CFLAGS += -std=c99 # Define which version of the C standard to use
CFLAGS += -Wall # Enable the 'all' set of warnings
CFLAGS += -Werror # Treat all warnings as error
CFLAGS += -Wshadow # Warn when shadowing variables
CFLAGS += -Wextra # Enable additional warnings
CFLAGS += -Wno-unused-variable #Unused parameters
CFLAGS += -Wno-unused-command-line-argument

SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)
LIBFILE = libft.a # NEED TO BE CHANGED ! Name of the lib

all: $(SOURCES) $(LIBFILE) soft-clean

lib: $(LIBFILE)

$(LIBFILE): $(OBJECTS)
	$(AR) r $@ $(OBJECTS)

*.o:
	$(CC) -o $@ -c $< $(CFLAGS)

clean: 
	@rm -rf *.o *.a

soft-clean: 
	@rm -rf *.o
