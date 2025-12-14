#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)6;
signed char var_5 = (signed char)14;
int var_6 = -1517803095;
unsigned long long int var_7 = 2003719348723618752ULL;
signed char var_8 = (signed char)-13;
unsigned short var_9 = (unsigned short)13451;
unsigned char var_10 = (unsigned char)144;
unsigned short var_11 = (unsigned short)32646;
int zero = 0;
long long int var_12 = -2374101729110423438LL;
unsigned char var_13 = (unsigned char)165;
int var_14 = 1906431169;
signed char var_15 = (signed char)12;
signed char var_16 = (signed char)-26;
unsigned long long int var_17 = 8801391286154273690ULL;
int var_18 = 1720470141;
signed char var_19 = (signed char)76;
unsigned long long int var_20 = 13126086302142366618ULL;
short arr_1 [15] ;
long long int arr_2 [15] ;
long long int arr_7 [15] ;
unsigned int arr_9 [15] ;
short arr_12 [21] ;
signed char arr_13 [21] ;
signed char arr_15 [21] ;
short arr_16 [21] [21] [21] [21] ;
unsigned char arr_3 [15] ;
unsigned char arr_6 [15] ;
unsigned char arr_11 [15] ;
unsigned long long int arr_19 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)28047 : (short)-11528;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -4573991701311309994LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = -6293774364640230015LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 3214476332U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)-20920 : (short)13359;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)-86 : (signed char)126;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (short)3746;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)74 : (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)244 : (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 6007008876495811328ULL : 9870036576301938070ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
