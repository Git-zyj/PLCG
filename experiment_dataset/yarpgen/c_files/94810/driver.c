#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14365;
unsigned short var_2 = (unsigned short)12646;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)79;
_Bool var_7 = (_Bool)1;
short var_10 = (short)-3066;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 3518993294904942087ULL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)100;
unsigned long long int var_16 = 4950853197256070502ULL;
unsigned short var_17 = (unsigned short)52729;
unsigned char var_18 = (unsigned char)168;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)18;
unsigned short arr_1 [16] ;
unsigned long long int arr_3 [16] [16] [16] ;
short arr_9 [16] ;
_Bool arr_13 [16] [16] [16] [16] ;
short arr_6 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)48503;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 15107794110375231878ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (short)20371;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)10642;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
