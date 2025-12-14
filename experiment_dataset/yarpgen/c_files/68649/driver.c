#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)54;
unsigned char var_3 = (unsigned char)243;
unsigned int var_7 = 2204374243U;
unsigned char var_8 = (unsigned char)104;
signed char var_9 = (signed char)121;
signed char var_10 = (signed char)-102;
unsigned char var_11 = (unsigned char)39;
unsigned short var_14 = (unsigned short)63147;
unsigned char var_17 = (unsigned char)20;
int zero = 0;
unsigned char var_20 = (unsigned char)110;
signed char var_21 = (signed char)-121;
int var_22 = -1583856889;
long long int var_23 = -3800869905731474332LL;
long long int var_24 = 1643001824167897212LL;
unsigned long long int var_25 = 17536515296578303397ULL;
unsigned short var_26 = (unsigned short)26815;
unsigned short var_27 = (unsigned short)1416;
short var_28 = (short)-4578;
signed char var_29 = (signed char)-46;
short arr_0 [14] ;
short arr_2 [14] ;
signed char arr_4 [14] [14] [14] ;
unsigned short arr_5 [14] [14] ;
signed char arr_7 [14] [14] [14] [14] ;
unsigned char arr_9 [14] ;
short arr_12 [14] [14] ;
unsigned long long int arr_13 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-25670;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)-17500;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)58252;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (short)-14642;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = 10515232921807328806ULL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
