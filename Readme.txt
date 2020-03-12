----------------------
PROGRAM NAME: foobarbaz.c
----------------------
AUTHOR'S NAME
--------------
Harir Al-Rubaye

INTRODUCTION
------------
My program overall does the following:

• Creates a foobarbaz array
• Prints the foobarbaz array
• Randomly creates two swap points
• Prints them on their own line with blank lines above and below
• Swaps the foobarbaz values at the two indices in the foobarbaz array
• Prints out the foobarbaz array again

HEADERS  MADE
--------------
foobarbaz.h

FUNCTIONS INCLUDED
-------------------
double rand_double(double a, double b);
struct foobarbaz* rand_foobarbaz ();
struct foobarbaz** many_foobarbaz ();
void swap_foobarbaz (struct foobarbaz** foobarbaz_array,int one, int two);
void print_foobarbaz(struct foobarbaz** rand_array);

Structures Made
--------------
struct foobarbaz {
    int foo;
    double bar;
    int baz;
};

RUNNING THE PROGRAM
-------------------
To compile the program type the following on your terminal:
    $ make all

To run the program:
    $ ./foobarbaz

After that to get rid of the *.o files:
    $ make clean
