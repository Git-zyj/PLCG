#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1888646810;
_Bool var_2 = (_Bool)0;
int var_3 = -865659973;
unsigned char var_4 = (unsigned char)104;
unsigned int var_5 = 777740371U;
unsigned int var_9 = 3667135951U;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int var_13 = 1589525078;
int var_14 = -92408286;
_Bool var_16 = (_Bool)0;
unsigned char var_18 = (unsigned char)230;
int zero = 0;
unsigned char var_19 = (unsigned char)139;
unsigned int var_20 = 2392840066U;
int var_21 = -1708845390;
unsigned int var_22 = 1314304209U;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)33;
int var_25 = -2063288960;
unsigned char var_26 = (unsigned char)66;
unsigned char var_27 = (unsigned char)19;
int var_28 = 479287297;
_Bool var_29 = (_Bool)0;
unsigned char var_30 = (unsigned char)19;
_Bool var_31 = (_Bool)1;
int var_32 = 1575422986;
unsigned char arr_4 [16] [16] [16] ;
unsigned char arr_6 [16] ;
unsigned char arr_11 [16] [16] [16] [16] ;
_Bool arr_12 [16] ;
unsigned int arr_13 [16] [16] [16] [16] ;
_Bool arr_21 [16] [16] [16] ;
_Bool arr_19 [16] ;
unsigned int arr_22 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 3990326451U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = 953001336U;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
