#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1634736889;
signed char var_10 = (signed char)87;
signed char var_12 = (signed char)-122;
unsigned int var_16 = 2569864078U;
int zero = 0;
unsigned short var_20 = (unsigned short)7433;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 187117400U;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-28571;
short arr_2 [18] ;
short arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)18441;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-11213 : (short)8367;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
