#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1250928987U;
short var_3 = (short)-29022;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-6189;
short var_8 = (short)13221;
_Bool var_9 = (_Bool)0;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)4;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3689135017U;
unsigned short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)12746;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
