#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2882728042507630677LL;
unsigned int var_2 = 2404010585U;
unsigned long long int var_6 = 4378693947765281578ULL;
unsigned long long int var_9 = 13203160562683945559ULL;
long long int var_18 = 7879725553019896340LL;
unsigned char var_19 = (unsigned char)38;
int zero = 0;
signed char var_20 = (signed char)54;
unsigned long long int var_21 = 13873384884478752354ULL;
short var_22 = (short)18781;
unsigned char var_23 = (unsigned char)160;
short var_24 = (short)-25920;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)-11;
unsigned char var_27 = (unsigned char)84;
unsigned char var_28 = (unsigned char)45;
unsigned char var_29 = (unsigned char)144;
_Bool var_30 = (_Bool)0;
unsigned int var_31 = 481847396U;
int var_32 = -2011420026;
short var_33 = (short)26091;
unsigned char arr_0 [16] ;
unsigned short arr_1 [16] [16] ;
signed char arr_2 [16] [16] ;
int arr_3 [16] ;
int arr_4 [16] ;
unsigned char arr_5 [16] [16] ;
int arr_7 [16] ;
long long int arr_8 [16] [16] [16] ;
unsigned int arr_14 [25] ;
_Bool arr_15 [25] ;
unsigned char arr_17 [10] [10] ;
unsigned char arr_6 [16] [16] ;
int arr_10 [16] ;
unsigned char arr_11 [16] ;
unsigned long long int arr_12 [16] [16] ;
_Bool arr_13 [16] ;
long long int arr_21 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)208 : (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)30676 : (unsigned short)16505;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 956698819;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 217408644;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1243895752 : 263501437;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -3898541358223649877LL : 2250819133339119409LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = 1585475620U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)237 : (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1028867966 : -119405600;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)231 : (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 1292022677609310456ULL : 5204961363007260050ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_21 [i_0] = -702844946638993989LL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
