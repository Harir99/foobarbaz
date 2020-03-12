#include<stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "foobarbaz.h"

void swap_foobarbaz (struct foobarbaz** foobarbaz_array,int one, int two) {

    struct foobarbaz* old_one = foobarbaz_array[one];
    foobarbaz_array[one] = foobarbaz_array[two];
    foobarbaz_array[two] = old_one;

}
