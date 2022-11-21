CC = gcc
AR = ar -rcs
FLAGS = -Wall -g
OBJECTS_MAIN = main.o
OBJECTS_MT_MAT = my_mat.o

all: connections library

library: libclass.a

libclass.a: $(OBJECTS_MT_MAT)
	$(AR) libclass.a $(OBJECTS_MT_MAT)

connections: $(OBJECTS_MAIN) libclass.a
	$(CC) $(FLAGS) -o connections $(OBJECTS_MAIN) libclass.a


main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

.PHONY: clean all

Clean:
	rm -f *.o *.a connections library