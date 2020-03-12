#include<stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "foobarbaz.h"

void print_foobarbaz (struct foobarbaz** rand_array){
    int i;
    for ( i = 0; i < 20; i++) {
        printf("foo: %d\t\t bar: %lf\t\tbaz: %d\n",  rand_array[i]-> foo, rand_array[i] -> bar, rand_array[i] -> baz);
    }
}
