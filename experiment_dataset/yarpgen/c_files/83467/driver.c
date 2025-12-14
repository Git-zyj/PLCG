#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 371754187;
short var_1 = (short)-5936;
unsigned char var_2 = (unsigned char)38;
int var_3 = -67099203;
short var_4 = (short)-4291;
unsigned long long int var_5 = 18178601234905686783ULL;
unsigned int var_6 = 1042000356U;
int var_7 = -179599765;
signed char var_8 = (signed char)-96;
unsigned short var_10 = (unsigned short)11571;
unsigned char var_12 = (unsigned char)20;
long long int var_13 = 7050691585209204352LL;
_Bool var_14 = (_Bool)1;
signed char var_17 = (signed char)-21;
signed char var_18 = (signed char)33;
int zero = 0;
long long int var_19 = -3434264051508866916LL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)114;
unsigned short var_22 = (unsigned short)54650;
int var_23 = -1779909001;
unsigned long long int var_24 = 17958039891236578167ULL;
int var_25 = 572620375;
unsigned long long int var_26 = 14757758086811761646ULL;
unsigned char var_27 = (unsigned char)39;
unsigned char var_28 = (unsigned char)22;
signed char var_29 = (signed char)107;
_Bool var_30 = (_Bool)0;
_Bool var_31 = (_Bool)1;
signed char arr_0 [23] ;
unsigned short arr_1 [23] [23] ;
int arr_4 [16] ;
unsigned int arr_6 [16] [16] ;
int arr_9 [16] ;
unsigned int arr_10 [16] ;
signed char arr_11 [16] [16] ;
_Bool arr_7 [16] ;
long long int arr_8 [16] [16] ;
short arr_12 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)60411;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -1787266583;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 336233169U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 506333054;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 3393405815U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = -7796338721031844546LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)17029 : (short)-8735;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
