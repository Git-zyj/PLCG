#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28305;
unsigned long long int var_2 = 7893752249703774432ULL;
unsigned int var_4 = 605787331U;
_Bool var_5 = (_Bool)0;
int zero = 0;
long long int var_13 = 3414006289065511772LL;
short var_14 = (short)-8069;
unsigned int var_15 = 2353347633U;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)13918;
short var_18 = (short)-13099;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-9342;
long long int var_22 = -8816588814527393415LL;
long long int var_23 = 3655369201422979406LL;
long long int var_24 = 4662939671036189145LL;
unsigned char var_25 = (unsigned char)118;
long long int var_26 = 9037959751646830125LL;
unsigned int var_27 = 2459554531U;
unsigned int arr_0 [21] ;
unsigned short arr_1 [21] ;
short arr_2 [15] [15] ;
int arr_3 [15] [15] ;
unsigned int arr_4 [20] [20] ;
_Bool arr_5 [20] ;
_Bool arr_6 [23] [23] ;
long long int arr_7 [23] ;
int arr_8 [23] ;
signed char arr_10 [23] ;
long long int arr_13 [23] [23] [23] ;
int arr_14 [23] [23] ;
_Bool arr_16 [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 3110863585U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)48583;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)11522 : (short)27758;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = -231188669;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 1740342426U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = -5151536375418959800LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = -753533788;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 6492710672371750801LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = 603311734;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
