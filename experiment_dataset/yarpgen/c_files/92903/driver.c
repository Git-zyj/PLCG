#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7053;
int var_2 = -1331188481;
int var_3 = -946138414;
int var_4 = 985747535;
unsigned char var_5 = (unsigned char)29;
int var_7 = 935618005;
int var_9 = 1473035542;
unsigned short var_10 = (unsigned short)57029;
int var_11 = -648902301;
int var_12 = 1397921007;
unsigned short var_13 = (unsigned short)17529;
int var_15 = -2072778136;
int zero = 0;
unsigned char var_18 = (unsigned char)208;
short var_19 = (short)-5274;
short var_20 = (short)11863;
unsigned short var_21 = (unsigned short)32551;
short var_22 = (short)-1937;
int var_23 = -1263744588;
unsigned short var_24 = (unsigned short)52165;
int var_25 = 349132830;
_Bool var_26 = (_Bool)0;
unsigned char var_27 = (unsigned char)102;
int var_28 = -34534143;
_Bool var_29 = (_Bool)1;
int var_30 = -1797934612;
int var_31 = -1902075063;
unsigned char var_32 = (unsigned char)224;
unsigned short var_33 = (unsigned short)10854;
unsigned char var_34 = (unsigned char)200;
short arr_0 [15] ;
int arr_1 [15] ;
short arr_3 [15] [15] ;
unsigned char arr_7 [15] ;
_Bool arr_10 [15] [15] [15] ;
unsigned char arr_11 [15] ;
int arr_23 [15] [15] [15] ;
_Bool arr_8 [15] [15] ;
int arr_9 [15] [15] ;
int arr_14 [21] ;
int arr_27 [15] [15] ;
unsigned char arr_28 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)23128;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1647206746;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (short)12480;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = -1766340747;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = 1669543330;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = -592272998;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_27 [i_0] [i_1] = 1044748005;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (unsigned char)255;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
