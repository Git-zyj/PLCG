#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4887;
unsigned long long int var_5 = 10732795098467036080ULL;
unsigned short var_7 = (unsigned short)60811;
unsigned long long int var_9 = 1878380611111459819ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_14 = (short)-3052;
unsigned long long int var_15 = 6977864280482113852ULL;
int var_16 = 407419426;
signed char var_17 = (signed char)-26;
unsigned char var_18 = (unsigned char)69;
unsigned short var_19 = (unsigned short)48686;
signed char var_20 = (signed char)54;
unsigned short var_21 = (unsigned short)11612;
_Bool arr_0 [11] ;
unsigned char arr_1 [11] ;
unsigned short arr_2 [11] [11] [11] ;
unsigned short arr_3 [11] ;
unsigned short arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)255 : (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)10698;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)40094;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)12987;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
