#include<stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "foobarbaz.h"

double rand_double(double a, double b){
    double Random_numbers;

    if( b > a){
        double old_a = a;

        a = b;
        b = old_a;
        Random_numbers = ((double) rand() / (double) RAND_MAX) * (b - a) + a;
    }
    return(Random_numbers);

}
