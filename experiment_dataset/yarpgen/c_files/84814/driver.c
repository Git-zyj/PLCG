#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2344915090010174561LL;
short var_1 = (short)-18808;
unsigned char var_3 = (unsigned char)108;
unsigned short var_4 = (unsigned short)9947;
unsigned int var_5 = 3123923742U;
int var_6 = 1501294999;
unsigned short var_7 = (unsigned short)5058;
long long int var_8 = -1886510063710393009LL;
int var_9 = -2000611803;
unsigned int var_10 = 363264205U;
unsigned int var_11 = 874059128U;
signed char var_12 = (signed char)29;
int zero = 0;
unsigned short var_14 = (unsigned short)24863;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)133;
short var_17 = (short)24020;
int var_18 = 971142559;
signed char var_19 = (signed char)-3;
unsigned short var_20 = (unsigned short)19016;
unsigned int var_21 = 1573851426U;
long long int arr_0 [22] ;
signed char arr_1 [22] ;
unsigned char arr_4 [18] ;
signed char arr_5 [18] [18] ;
signed char arr_8 [12] [12] ;
unsigned int arr_13 [23] ;
int arr_14 [23] ;
int arr_15 [23] ;
int arr_2 [22] ;
unsigned int arr_3 [22] ;
unsigned long long int arr_7 [18] [18] ;
signed char arr_12 [12] ;
unsigned long long int arr_16 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -7296602863767542850LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 990933863U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = -248625674;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = 749239318;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 1222056480;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 431909095U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 14204497089374204545ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = 1615730755370868503ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
