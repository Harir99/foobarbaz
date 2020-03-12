#include<stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "foobarbaz.h"

struct foobarbaz* rand_foobarbaz (){
     struct foobarbaz* new_struct = malloc (sizeof(struct foobarbaz));

        new_struct -> foo = (int) rand_double(0,49);  /* use arrow for pointers not dot notation  */
        new_struct -> bar = rand_double(0.0,100.0);
        new_struct -> baz = (int) rand_double(50,99);

return new_struct;
  }
