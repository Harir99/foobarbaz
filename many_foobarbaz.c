#include<stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "foobarbaz.h"

struct foobarbaz** many_foobarbaz (){
    int i;
    struct foobarbaz** my_struct = malloc (sizeof(struct foobarbaz)*20); /* the stuuct have consistent size so you dont need sizeof(struct foobarbaz*) */
      for (i = 0; i < 20; i++) {
          my_struct[i] = rand_foobarbaz ();
      }
return my_struct;

}
