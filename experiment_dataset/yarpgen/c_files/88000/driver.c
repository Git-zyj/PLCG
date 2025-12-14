#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)44821;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)227;
int zero = 0;
unsigned long long int var_10 = 15322289943112401543ULL;
unsigned long long int var_11 = 11834634953990539300ULL;
unsigned short var_12 = (unsigned short)37658;
int var_13 = -1708787405;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3081219234U;
int var_16 = 1679859020;
unsigned int var_17 = 2768486515U;
short var_18 = (short)-25353;
unsigned long long int var_19 = 15020521330286132236ULL;
unsigned short arr_6 [18] [18] ;
unsigned short arr_11 [22] [22] ;
unsigned long long int arr_14 [22] [22] [22] ;
signed char arr_17 [22] ;
int arr_18 [22] ;
_Bool arr_29 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)43671;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)62509;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 3902360926825353006ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 1939960520 : 277374627;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
