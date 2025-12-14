#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4157607617743583169LL;
unsigned short var_3 = (unsigned short)21061;
int var_7 = -1800037948;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)125;
long long int var_10 = 4601151773678500755LL;
unsigned short var_11 = (unsigned short)3805;
unsigned long long int var_12 = 6826671129728582957ULL;
unsigned long long int var_13 = 11481215970631642483ULL;
int var_14 = 578602954;
unsigned char var_15 = (unsigned char)201;
int zero = 0;
long long int var_20 = -1090410317067137723LL;
short var_21 = (short)3154;
unsigned short var_22 = (unsigned short)15782;
unsigned int var_23 = 969447495U;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)0;
long long int var_26 = 3998443767331218366LL;
short var_27 = (short)-23033;
unsigned char arr_0 [11] ;
short arr_1 [11] [11] ;
_Bool arr_2 [11] ;
unsigned char arr_4 [21] ;
unsigned short arr_6 [21] [21] ;
int arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-16078;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)19087;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = -2028370304;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
