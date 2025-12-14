#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1226280320U;
unsigned int var_3 = 3388729630U;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 10438397468811603453ULL;
unsigned long long int var_7 = 17796108312937517999ULL;
signed char var_8 = (signed char)-124;
long long int var_9 = 918958611157587289LL;
unsigned long long int var_10 = 15794650838576525298ULL;
unsigned int var_11 = 3710971170U;
int zero = 0;
unsigned int var_12 = 2087132493U;
short var_13 = (short)-29302;
unsigned int var_14 = 1065782851U;
unsigned short var_15 = (unsigned short)1540;
unsigned int var_16 = 2419259091U;
unsigned int var_17 = 344512457U;
long long int var_18 = -8791407091425266926LL;
unsigned long long int var_19 = 6991217646714662633ULL;
unsigned int var_20 = 89370804U;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2469542132U;
signed char var_23 = (signed char)-49;
unsigned int var_24 = 1603368644U;
_Bool var_25 = (_Bool)1;
short var_26 = (short)10417;
unsigned long long int var_27 = 9397107415437508156ULL;
_Bool var_28 = (_Bool)0;
unsigned short var_29 = (unsigned short)39820;
unsigned long long int var_30 = 11369721156678857568ULL;
long long int var_31 = 5841262457025162784LL;
unsigned int var_32 = 3733996457U;
_Bool var_33 = (_Bool)1;
unsigned int var_34 = 4262203288U;
_Bool arr_0 [23] [23] ;
unsigned int arr_2 [23] ;
signed char arr_3 [16] [16] ;
_Bool arr_5 [16] [16] [16] ;
unsigned int arr_8 [16] [16] [16] [16] ;
unsigned long long int arr_9 [16] [16] [16] [16] ;
_Bool arr_10 [16] [16] [16] ;
unsigned long long int arr_13 [16] [16] [16] ;
unsigned int arr_14 [16] [16] [16] [16] [16] [16] ;
short arr_17 [16] ;
_Bool arr_18 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1356212853U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1075207655U : 3469411056U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 15598193844178693518ULL : 12964408987513260369ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 5009935899545277058ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 778521125U : 4107996350U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (short)13950 : (short)-23523;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = (_Bool)0;
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
    hash(&seed, var_34);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
