#include<stdio.h>
#include <stdlib.h>
#include "foobarbaz.h"

int main(int argc, char const *argv[]) {
    double Random_numbers;
    struct foobarbaz* new_struct;
    struct foobarbaz** my_struct;
    int rand1 = 0;
    int rand2 = 19;
    int var_one;
    int var_two;
    int i;

    my_struct = many_foobarbaz ();
    print_foobarbaz(my_struct);
    var_two = (int) rand_double(rand1,rand2);
    var_one = (int) rand_double(rand1,rand2);
    printf("\nFIRST SWAP: %d\n\n",var_one);
    printf("\nSECOND SWAP: %d\n\n",var_two);
    swap_foobarbaz (my_struct,var_one, var_two);
    print_foobarbaz(my_struct);
    for (i = 0; i < 20; i++) {
        free(my_struct[i]);
    }
    free(my_struct);
    return 0;
}
