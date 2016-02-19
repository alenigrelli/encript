CC = gcc
VV = valgrind
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c99 -g
VFLAGS = --leak-check=full --show-reachable=yes
OBJECTS = dic.o

encriptar : $(OBJECTS) encriptar.c
	$(CC) $(CFLAGS) -o $@ $(OBJECTS) encriptar.c

dic.o : dic.c
	$(CC) $(CFLAGS) -c $<

.PHONY : clean

clean : 
	rm -f encriptar $(OBJECTS)
