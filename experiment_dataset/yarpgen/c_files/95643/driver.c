#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = -4351051634237786311LL;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)197;
signed char var_9 = (signed char)14;
signed char var_10 = (signed char)-87;
signed char var_11 = (signed char)50;
short var_12 = (short)-32111;
short var_14 = (short)-3291;
unsigned char var_15 = (unsigned char)185;
signed char var_17 = (signed char)19;
int zero = 0;
int var_18 = 1953201545;
unsigned short var_19 = (unsigned short)2768;
unsigned int var_20 = 2334024681U;
signed char var_21 = (signed char)-14;
unsigned int var_22 = 951142989U;
short var_23 = (short)16055;
long long int var_24 = 2513015477259431931LL;
short var_25 = (short)-12036;
signed char var_26 = (signed char)-31;
short var_27 = (short)28313;
unsigned char var_28 = (unsigned char)55;
signed char arr_0 [22] ;
unsigned char arr_1 [22] ;
unsigned char arr_3 [22] [22] ;
unsigned long long int arr_7 [18] ;
short arr_9 [18] [18] [18] ;
signed char arr_10 [18] [18] [18] ;
signed char arr_12 [18] ;
unsigned long long int arr_15 [18] ;
signed char arr_27 [25] ;
unsigned long long int arr_28 [25] ;
long long int arr_29 [25] [25] ;
long long int arr_30 [25] [25] [25] ;
unsigned int arr_4 [22] ;
_Bool arr_8 [18] ;
signed char arr_11 [18] [18] ;
_Bool arr_16 [18] ;
signed char arr_17 [18] [18] ;
signed char arr_32 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 18154541569351616056ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)26524;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = 2948600390152415181ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_28 [i_0] = 9266423121353096216ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_29 [i_0] [i_1] = 6011584226489957509LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -2881001447324868059LL : -4351592319406132044LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 2500631226U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)125 : (signed char)42;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
