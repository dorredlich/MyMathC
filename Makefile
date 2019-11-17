
FLAGS = -Wall -g





all: mymathd mymaths mains maind

maind: main.o mymathd
	gcc $(FLAGS) -o maind main.o ./libmyMath.so	

mains: main.o mymaths 
	gcc $(FLAGS) -o mains main.o libmyMath.a

mymathd: power.o basicmath.o
	gcc -shared -o libmyMath.so power.o basicmath.o

mymaths: basicmath.o power.o
	ar -rcs libmyMath.a power.o basicmath.o

basicmath.o: basicmath.c myMath.h
	gcc $(FLAGS) -c basicmath.c 

power.o: power.c myMath.h
	gcc $(FLAGS) -c power.c

main.o: main.c myMath.h
	gcc $(FLAGS) -c main.c


.PHONY: clean all
	
clean:
	rm -f *.o *.a *.so mains maind

	 
	 
			
