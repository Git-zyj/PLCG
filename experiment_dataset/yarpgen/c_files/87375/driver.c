#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1260292330;
unsigned long long int var_2 = 3224762993645914230ULL;
unsigned long long int var_3 = 15842993187056782563ULL;
long long int var_6 = 7845411246922759333LL;
long long int var_7 = 4379836708725316612LL;
long long int var_8 = 1408928288113301054LL;
signed char var_9 = (signed char)-114;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)48135;
unsigned long long int var_13 = 7358351507800355607ULL;
short var_14 = (short)-3996;
signed char var_15 = (signed char)-73;
short var_16 = (short)11927;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
int var_19 = 379343788;
int var_20 = -2147128143;
unsigned short var_21 = (unsigned short)29783;
signed char var_22 = (signed char)-88;
int var_23 = 594278588;
unsigned long long int arr_1 [16] ;
signed char arr_2 [16] ;
_Bool arr_3 [16] [16] ;
unsigned int arr_10 [19] ;
int arr_11 [19] ;
unsigned int arr_12 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 3433558609794597539ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 934135529U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 1903121760;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = 2203928995U;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
