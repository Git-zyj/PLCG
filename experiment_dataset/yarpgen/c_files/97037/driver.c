#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -620275283;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)23388;
unsigned char var_4 = (unsigned char)119;
unsigned long long int var_5 = 10848070355386244351ULL;
signed char var_6 = (signed char)-105;
signed char var_7 = (signed char)(-127 - 1);
signed char var_8 = (signed char)-17;
unsigned char var_9 = (unsigned char)209;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 919364022004633836ULL;
unsigned long long int var_12 = 13388105962838438614ULL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)55364;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)12748;
unsigned long long int var_17 = 16990157368903832294ULL;
unsigned long long int var_18 = 10718042250083450001ULL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)56407;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)63159;
long long int var_23 = -1391836561993404976LL;
unsigned long long int var_24 = 5575558677744067202ULL;
short var_25 = (short)-13677;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 1209620658573445092ULL;
unsigned short var_28 = (unsigned short)34729;
unsigned char var_29 = (unsigned char)47;
_Bool var_30 = (_Bool)0;
_Bool var_31 = (_Bool)0;
int arr_2 [11] ;
unsigned long long int arr_8 [10] [10] ;
_Bool arr_11 [10] ;
unsigned char arr_24 [10] [10] [10] [10] ;
int arr_28 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1366932338;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 10389690922649970618ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)210 : (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_28 [i_0] = -2074771797;
}

void checksum() {
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
