#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6214542233127939359ULL;
short var_2 = (short)-4484;
unsigned char var_3 = (unsigned char)239;
unsigned short var_5 = (unsigned short)13382;
unsigned int var_6 = 2232797648U;
short var_7 = (short)-19802;
unsigned int var_9 = 1137320265U;
unsigned int var_10 = 2701549207U;
signed char var_11 = (signed char)-97;
unsigned int var_12 = 1813796237U;
short var_14 = (short)15939;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 3481128572764155262ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)-23327;
short var_19 = (short)3601;
unsigned int var_20 = 2711721565U;
unsigned char var_21 = (unsigned char)185;
signed char var_22 = (signed char)-61;
unsigned char var_23 = (unsigned char)2;
long long int var_24 = 2420833271485258721LL;
unsigned long long int arr_0 [21] [21] ;
int arr_1 [21] [21] ;
int arr_7 [19] ;
_Bool arr_2 [21] [21] ;
unsigned int arr_3 [21] ;
unsigned char arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 3487865646843131695ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 1412224975;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = -1625521202;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 4219975135U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)159;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
