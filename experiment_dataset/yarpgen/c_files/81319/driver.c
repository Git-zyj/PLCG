#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5711;
unsigned short var_3 = (unsigned short)17204;
unsigned long long int var_12 = 7138296248190461593ULL;
int zero = 0;
unsigned int var_13 = 3003357535U;
unsigned short var_14 = (unsigned short)21838;
signed char var_15 = (signed char)88;
unsigned long long int var_16 = 12749314608222981120ULL;
unsigned int var_17 = 1238995978U;
unsigned long long int var_18 = 15133925699584152534ULL;
unsigned long long int var_19 = 17456178669910081189ULL;
unsigned char var_20 = (unsigned char)204;
unsigned long long int var_21 = 14474975406845944773ULL;
unsigned long long int arr_0 [18] ;
unsigned int arr_2 [18] ;
short arr_3 [19] ;
unsigned int arr_4 [19] ;
unsigned char arr_5 [19] ;
unsigned long long int arr_9 [10] ;
unsigned char arr_16 [23] ;
unsigned short arr_18 [23] [23] ;
short arr_6 [19] [19] ;
unsigned short arr_7 [19] ;
unsigned char arr_10 [10] ;
_Bool arr_14 [14] ;
unsigned char arr_15 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 2541286295032405153ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1707047393U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)24439;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 737943062U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 17701223438499204778ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)27151;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-15616;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned short)57180;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)54 : (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)80 : (unsigned char)16;
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
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
