#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 9215859487363593852LL;
_Bool var_3 = (_Bool)0;
signed char var_7 = (signed char)-79;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 16095853771989973901ULL;
unsigned short var_16 = (unsigned short)27358;
unsigned int var_17 = 188041356U;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -6905298092100566893LL;
unsigned short var_21 = (unsigned short)22059;
int var_22 = 563938308;
unsigned int var_23 = 1694461569U;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)47897;
_Bool var_26 = (_Bool)0;
unsigned long long int var_27 = 11304389819079957166ULL;
_Bool var_28 = (_Bool)0;
signed char var_29 = (signed char)-119;
unsigned long long int var_30 = 3429272876636961794ULL;
unsigned short var_31 = (unsigned short)17941;
signed char var_32 = (signed char)34;
unsigned int var_33 = 2305831214U;
unsigned short arr_0 [19] [19] ;
long long int arr_1 [19] ;
_Bool arr_2 [19] ;
_Bool arr_7 [19] [19] [19] [19] ;
short arr_12 [19] [19] [19] [19] [19] [19] [19] ;
_Bool arr_33 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)22161;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -4904360064714131267LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? (short)-2124 : (short)-19214;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
