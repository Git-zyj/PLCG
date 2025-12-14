#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1985299494U;
short var_3 = (short)-9431;
int var_4 = 1210508915;
int var_7 = -705771009;
long long int var_9 = 7506241047553750219LL;
signed char var_13 = (signed char)-86;
int zero = 0;
unsigned int var_18 = 1830103413U;
unsigned int var_19 = 3245591721U;
signed char var_20 = (signed char)-8;
long long int var_21 = 7260558834278773893LL;
unsigned int var_22 = 3141439030U;
unsigned short var_23 = (unsigned short)61569;
unsigned short var_24 = (unsigned short)47315;
unsigned int var_25 = 3167765087U;
unsigned short var_26 = (unsigned short)32493;
unsigned char var_27 = (unsigned char)171;
unsigned short var_28 = (unsigned short)63908;
unsigned short arr_0 [25] ;
unsigned int arr_1 [25] [25] ;
unsigned short arr_10 [25] [25] [25] ;
unsigned short arr_11 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)28762;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 577362945U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)24610;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)23871;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
