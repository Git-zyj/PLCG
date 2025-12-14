#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32358;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 16188543263883581160ULL;
signed char var_11 = (signed char)39;
int var_12 = 893881152;
int zero = 0;
unsigned short var_17 = (unsigned short)6831;
signed char var_18 = (signed char)-59;
int var_19 = -1136723094;
signed char var_20 = (signed char)-107;
unsigned long long int var_21 = 11383575379605066011ULL;
unsigned int var_22 = 2193710393U;
long long int var_23 = -2395381860469432317LL;
signed char var_24 = (signed char)52;
unsigned short var_25 = (unsigned short)8362;
unsigned short var_26 = (unsigned short)8775;
unsigned short var_27 = (unsigned short)10724;
int var_28 = 1226276575;
unsigned short var_29 = (unsigned short)10098;
int var_30 = 906105219;
unsigned int arr_0 [16] [16] ;
unsigned short arr_3 [16] ;
short arr_4 [16] ;
int arr_5 [16] ;
int arr_7 [16] ;
signed char arr_9 [16] [16] ;
unsigned short arr_13 [16] [16] [16] [16] ;
unsigned char arr_14 [16] ;
signed char arr_20 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 3829305837U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)24569;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)3937;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -57629400;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = -805124069;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)58766;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (signed char)-67;
}

void checksum() {
    hash(&seed, var_17);
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
