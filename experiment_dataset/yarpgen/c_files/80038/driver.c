#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26841;
signed char var_1 = (signed char)-122;
unsigned int var_2 = 4248854526U;
unsigned long long int var_3 = 13758763371488187580ULL;
short var_4 = (short)-191;
unsigned char var_5 = (unsigned char)149;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 672657942U;
unsigned short var_8 = (unsigned short)8192;
unsigned short var_9 = (unsigned short)62187;
unsigned short var_10 = (unsigned short)37591;
unsigned long long int var_11 = 11187259360658337866ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)83;
unsigned int var_14 = 1337822506U;
unsigned short var_15 = (unsigned short)17639;
unsigned long long int var_16 = 3407719210083869694ULL;
unsigned char var_17 = (unsigned char)249;
unsigned char var_18 = (unsigned char)20;
unsigned char var_19 = (unsigned char)121;
short var_20 = (short)-16833;
int var_21 = 1806176354;
short var_22 = (short)-32555;
_Bool var_23 = (_Bool)1;
unsigned char arr_0 [23] [23] ;
unsigned char arr_1 [23] ;
unsigned short arr_3 [23] ;
unsigned char arr_4 [23] [23] ;
unsigned short arr_6 [23] ;
unsigned int arr_11 [15] ;
long long int arr_12 [15] [15] ;
short arr_15 [22] ;
int arr_18 [22] ;
unsigned short arr_2 [23] ;
int arr_8 [23] [23] ;
unsigned char arr_9 [23] [23] ;
unsigned long long int arr_10 [23] ;
_Bool arr_14 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)42713;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)44 : (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)45453;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = 4110010430U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = 599190413344514037LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (short)-23466;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = 1149134571;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)16916 : (unsigned short)36896;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 362540165 : -1536029564;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)231 : (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 13290791033554285968ULL : 9899640230447218303ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
