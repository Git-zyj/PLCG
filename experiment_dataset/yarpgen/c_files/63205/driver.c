#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23895;
unsigned char var_2 = (unsigned char)144;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)13506;
unsigned short var_9 = (unsigned short)64364;
int var_10 = 759623164;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)213;
signed char var_16 = (signed char)-124;
int zero = 0;
unsigned char var_18 = (unsigned char)107;
unsigned int var_19 = 2166530911U;
signed char var_20 = (signed char)-44;
short var_21 = (short)15392;
unsigned short var_22 = (unsigned short)17173;
_Bool var_23 = (_Bool)0;
int var_24 = -173085563;
long long int var_25 = -3634336568922068449LL;
unsigned long long int var_26 = 10697402520709633746ULL;
int var_27 = 628163319;
unsigned long long int var_28 = 8837296365979418688ULL;
short arr_0 [16] [16] ;
int arr_1 [16] ;
unsigned int arr_2 [16] ;
_Bool arr_4 [23] ;
int arr_5 [23] [23] ;
unsigned char arr_6 [23] ;
short arr_3 [16] ;
unsigned short arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-15621;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -1919865579;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 1813599038U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = -442747715;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)28777 : (short)-3778;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned short)29881;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
