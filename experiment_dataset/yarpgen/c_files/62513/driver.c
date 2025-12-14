#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21377;
unsigned char var_2 = (unsigned char)227;
unsigned char var_3 = (unsigned char)173;
unsigned short var_5 = (unsigned short)58859;
signed char var_6 = (signed char)-6;
signed char var_7 = (signed char)-19;
unsigned short var_10 = (unsigned short)63077;
unsigned short var_11 = (unsigned short)46669;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_14 = (short)26167;
signed char var_15 = (signed char)-46;
signed char var_16 = (signed char)86;
unsigned short var_17 = (unsigned short)29919;
unsigned long long int var_18 = 1339421941087350608ULL;
long long int var_19 = 8665933085266838023LL;
unsigned int var_20 = 1131901888U;
short var_21 = (short)22506;
short var_22 = (short)22246;
unsigned long long int var_23 = 14805802190086968766ULL;
int var_24 = 17385444;
unsigned short var_25 = (unsigned short)17051;
signed char var_26 = (signed char)111;
short var_27 = (short)-7402;
short arr_0 [20] ;
unsigned short arr_2 [20] [20] ;
unsigned char arr_6 [20] ;
_Bool arr_7 [20] ;
int arr_8 [20] ;
unsigned long long int arr_12 [20] ;
short arr_24 [20] [20] [20] ;
signed char arr_4 [20] ;
unsigned short arr_9 [20] [20] ;
_Bool arr_14 [20] [20] ;
unsigned char arr_26 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)17179 : (short)-6580;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)39953;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 413549955;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = 889412542993159900ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)11639 : (short)2818;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)60 : (signed char)-91;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)44888;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_26 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)28 : (unsigned char)143;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
