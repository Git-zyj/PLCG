#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1072038488;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 11399656786551016729ULL;
unsigned int var_5 = 4008648914U;
unsigned int var_6 = 391569923U;
short var_7 = (short)11629;
unsigned short var_8 = (unsigned short)33791;
int var_9 = -1007019923;
int zero = 0;
long long int var_10 = 699806468200406668LL;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)6112;
unsigned char var_13 = (unsigned char)54;
unsigned short var_14 = (unsigned short)27644;
signed char var_15 = (signed char)-1;
unsigned long long int var_16 = 14486799976697894822ULL;
signed char var_17 = (signed char)12;
unsigned long long int var_18 = 7446470515127521239ULL;
unsigned int var_19 = 1156385809U;
short var_20 = (short)-23448;
unsigned int var_21 = 344314582U;
signed char var_22 = (signed char)112;
short var_23 = (short)-22556;
unsigned short var_24 = (unsigned short)30819;
int var_25 = 1943835057;
long long int var_26 = 4964491594841031252LL;
unsigned long long int var_27 = 5565287485862981965ULL;
unsigned short arr_1 [23] [23] ;
unsigned int arr_3 [23] ;
int arr_8 [23] ;
int arr_12 [23] ;
signed char arr_15 [23] [23] [23] [23] [23] ;
int arr_18 [23] [23] [23] [23] [23] ;
unsigned char arr_19 [23] [23] ;
long long int arr_20 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)35920;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 638003858U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = -1354936126;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = -631603762;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = -562666364;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = 4399862550930237848LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
