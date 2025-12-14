#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-22098;
signed char var_2 = (signed char)44;
signed char var_3 = (signed char)20;
_Bool var_4 = (_Bool)0;
short var_5 = (short)18063;
signed char var_6 = (signed char)30;
short var_7 = (short)-10710;
signed char var_8 = (signed char)22;
unsigned long long int var_9 = 8667958715669101271ULL;
int zero = 0;
short var_10 = (short)14006;
signed char var_11 = (signed char)-28;
short var_12 = (short)-2156;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 14994626740851682027ULL;
signed char var_15 = (signed char)-75;
short var_16 = (short)23888;
signed char var_17 = (signed char)118;
short var_18 = (short)-15944;
short var_19 = (short)30294;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 15030057222724391065ULL;
signed char var_22 = (signed char)-26;
short var_23 = (short)1147;
unsigned long long int var_24 = 6115070300019437245ULL;
unsigned int arr_13 [15] [15] [15] ;
long long int arr_16 [15] [15] [15] ;
unsigned long long int arr_24 [15] ;
int arr_27 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 2202604436U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 2977423705896181052LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = 17781373525276559483ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_27 [i_0] [i_1] = (i_0 % 2 == 0) ? 1220456930 : -643920684;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
