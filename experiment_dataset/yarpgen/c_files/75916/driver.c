#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25361;
long long int var_7 = -332019081630013533LL;
signed char var_8 = (signed char)57;
int zero = 0;
signed char var_16 = (signed char)93;
short var_17 = (short)31210;
long long int var_18 = 1836023546415953223LL;
long long int var_19 = 5376956433565987863LL;
long long int var_20 = 2341035440341243530LL;
long long int var_21 = 5584267397536363052LL;
short var_22 = (short)-23972;
long long int var_23 = 6062972705284414572LL;
unsigned short arr_0 [14] ;
short arr_1 [14] [14] ;
unsigned short arr_3 [19] [19] ;
short arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)54151;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (short)16440;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)13847 : (unsigned short)48830;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)24428;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
