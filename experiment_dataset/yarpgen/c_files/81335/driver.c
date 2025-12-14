#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1216792602;
unsigned short var_3 = (unsigned short)45317;
unsigned char var_4 = (unsigned char)237;
unsigned char var_5 = (unsigned char)29;
int var_10 = -2114353774;
unsigned char var_13 = (unsigned char)101;
int zero = 0;
long long int var_16 = 9216735993571638515LL;
unsigned short var_17 = (unsigned short)266;
int var_18 = -597330115;
unsigned long long int var_19 = 17008349530917446562ULL;
short var_20 = (short)14902;
int var_21 = -1912421196;
unsigned char var_22 = (unsigned char)162;
int var_23 = 921854408;
unsigned int var_24 = 1484670165U;
unsigned long long int var_25 = 5332572267780869647ULL;
signed char var_26 = (signed char)-83;
long long int var_27 = 5007903171812384429LL;
signed char arr_0 [21] ;
unsigned char arr_1 [21] ;
short arr_2 [21] ;
unsigned long long int arr_3 [21] ;
int arr_4 [21] ;
signed char arr_6 [21] ;
unsigned int arr_8 [16] ;
unsigned long long int arr_10 [16] [16] ;
signed char arr_11 [16] ;
unsigned int arr_17 [16] ;
unsigned char arr_7 [21] [21] ;
_Bool arr_13 [16] ;
signed char arr_14 [16] ;
unsigned long long int arr_19 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)29508;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 7061945412394738800ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 1255616924;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 2158390835U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = 14129363009712081093ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = 1966396924U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)35 : (signed char)119;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = 5732684659190837835ULL;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
