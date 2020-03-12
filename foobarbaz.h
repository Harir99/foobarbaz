double rand_double(double a, double b);
struct foobarbaz* rand_foobarbaz ();
struct foobarbaz** many_foobarbaz ();
void swap_foobarbaz (struct foobarbaz** foobarbaz_array,int one, int two);
void print_foobarbaz(struct foobarbaz** rand_array);

struct foobarbaz {
    int foo;
    double bar;
    int baz;
};
