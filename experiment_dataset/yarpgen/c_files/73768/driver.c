#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15214020577879517350ULL;
int var_1 = 1367528331;
long long int var_2 = 4684786483823274582LL;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)57;
unsigned char var_5 = (unsigned char)172;
unsigned long long int var_6 = 8495948299099411843ULL;
unsigned char var_7 = (unsigned char)72;
short var_8 = (short)11817;
signed char var_9 = (signed char)80;
short var_10 = (short)9533;
short var_11 = (short)24992;
unsigned long long int var_12 = 17358659363853076719ULL;
short var_13 = (short)-24757;
unsigned int var_14 = 327650091U;
unsigned short var_15 = (unsigned short)22153;
unsigned short var_16 = (unsigned short)46288;
unsigned long long int var_17 = 13216320160219422160ULL;
signed char var_18 = (signed char)43;
int zero = 0;
int var_19 = -1492519707;
long long int var_20 = -4259717958589761383LL;
int var_21 = 1570314752;
unsigned short var_22 = (unsigned short)32035;
unsigned short var_23 = (unsigned short)55432;
int var_24 = -338966738;
unsigned short var_25 = (unsigned short)49101;
unsigned int var_26 = 4205764263U;
signed char arr_3 [14] ;
short arr_7 [14] ;
unsigned short arr_8 [14] ;
unsigned long long int arr_13 [22] ;
long long int arr_20 [22] [22] ;
int arr_21 [22] [22] ;
signed char arr_25 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (short)-4084;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (unsigned short)33151;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = 13237104748568639350ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_20 [i_0] [i_1] = -2676174677989994527LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = -733129305;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = (signed char)38;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
