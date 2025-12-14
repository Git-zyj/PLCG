#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3004364999436306663LL;
unsigned short var_1 = (unsigned short)65343;
unsigned int var_2 = 192889395U;
unsigned short var_5 = (unsigned short)2884;
unsigned char var_7 = (unsigned char)108;
unsigned short var_8 = (unsigned short)7215;
unsigned short var_9 = (unsigned short)39954;
short var_12 = (short)-26948;
long long int var_13 = 8193730116519576814LL;
int var_14 = -701931892;
int zero = 0;
unsigned int var_16 = 2150883865U;
signed char var_17 = (signed char)-32;
unsigned int var_18 = 1982479466U;
unsigned int var_19 = 2009832742U;
unsigned long long int var_20 = 11218299309191873637ULL;
unsigned long long int var_21 = 1261635001802033387ULL;
short var_22 = (short)-27924;
unsigned int var_23 = 931828989U;
unsigned int var_24 = 85626774U;
unsigned int arr_0 [14] ;
unsigned short arr_9 [25] ;
unsigned short arr_7 [14] [14] ;
int arr_8 [14] ;
_Bool arr_11 [25] ;
unsigned int arr_12 [25] ;
unsigned char arr_17 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 3676071739U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (unsigned short)32959;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)1142;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 1458603466;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = 3355433725U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (unsigned char)145;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
