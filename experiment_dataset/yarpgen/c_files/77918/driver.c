#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-108;
unsigned short var_3 = (unsigned short)20974;
unsigned short var_7 = (unsigned short)51385;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 1118956844U;
unsigned char var_16 = (unsigned char)43;
unsigned long long int var_17 = 14440491793102472185ULL;
unsigned long long int var_18 = 4933060667294897002ULL;
short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)11852 : (short)-18891;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
