all: foobarbaz

foobarbaz: foobarbaz.o rand_double.o rand_foobarbaz.o many_foobarbaz.o swap_foobarbaz.o print_foobarbaz.o
	gcc -Wall -o foobarbaz foobarbaz.o rand_double.o rand_foobarbaz.o many_foobarbaz.o swap_foobarbaz.o print_foobarbaz.o

rand_double:  rand_double.c
	gcc -Wall -c rand_double.c

many_foobarbaz: many_foobarbaz.c
	gcc -Wall -c many_foobarbaz.c

swap_foobarbaz: swap_foobarbaz.c
	gcc -Wall -c  many_foobarbaz.c

rand_foobarbaz: rand_foobarbaz.c
	gcc -Wall -c  many_foobarbaz.c

print_foobarbaz: print_foobarbaz.c
	gcc -Wall -c  many_foobarbaz.c

clean:
	rm -rf *.o
	rm -rf foobarbaz
