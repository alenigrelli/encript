CC = gcc
VV = valgrind
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c99 -g
VFLAGS = --leak-check=full --show-reachable=yes
OBJECTS = dic.o

encriptar : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS) encriptar.c

dic.o : dic.c dic.o
	$(CC) $(CFLAGS) -c $<

.PHONY : clean

clean : 
	rm -f encriptar $(OBJECTS)
