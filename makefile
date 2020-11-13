#makefile for ex1
CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=power.o basicMath.o
FLAGS= -Wall -g

all: mymathd  mymaths mains maind	
mains: $(OBJECTS_MAIN) mymaths
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a
maind: $(OBJECTS_MAIN) mymathd
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so 
mymathd: $(OBJECTS_LIB)
	touch mymathd
	$(CC) -shared -o libmyMath.so  $(OBJECTS_LIB)
mymaths: $(OBJECTS_LIB)
	touch mymaths
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB)

#Compile our library source code into position independent code
basicMath.o: basicMath.c myMath.h
	$(CC) -Wall -fPIC -c  basicMath.c 
power.o: power.c myMath.h
	$(CC)  -Wall -fPIC  -c power.c
main.o: main.c myMath.h  
	$(CC) $(FLAGS) -c main.c 
clean:
	rm -f *.o *.a *.so mains maind mymaths mymathd
	
.PHONY: clean all  


		


