#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)1899;
short var_3 = (short)-18993;
_Bool var_4 = (_Bool)0;
long long int var_6 = 6462507263437717888LL;
unsigned short var_7 = (unsigned short)34294;
short var_8 = (short)-12908;
int var_9 = 1532916834;
unsigned char var_10 = (unsigned char)157;
unsigned long long int var_11 = 16788179629691638695ULL;
unsigned short var_13 = (unsigned short)53647;
int zero = 0;
unsigned char var_14 = (unsigned char)37;
unsigned short var_15 = (unsigned short)46871;
signed char var_16 = (signed char)48;
unsigned int var_17 = 4121472447U;
unsigned int var_18 = 3649458092U;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3879711932U;
unsigned char var_21 = (unsigned char)202;
signed char arr_0 [20] ;
unsigned short arr_1 [20] ;
unsigned short arr_2 [20] [20] ;
unsigned short arr_4 [11] ;
unsigned short arr_6 [11] [11] ;
_Bool arr_12 [21] ;
short arr_13 [21] ;
signed char arr_14 [21] ;
int arr_3 [20] [20] ;
unsigned long long int arr_10 [11] ;
int arr_11 [11] ;
unsigned short arr_15 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)7538;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)21571;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)45483;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)63592;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)18311 : (short)-27409;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)93 : (signed char)-67;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 825153974;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 2199758631238614479ULL : 3807735408935945845ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -781442552 : 1318317306;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)2462 : (unsigned short)61312;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
