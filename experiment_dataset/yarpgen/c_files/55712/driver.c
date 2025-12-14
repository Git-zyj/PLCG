#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)88;
long long int var_1 = -6260304146979232021LL;
unsigned int var_3 = 1723927473U;
unsigned short var_4 = (unsigned short)33135;
unsigned char var_5 = (unsigned char)204;
short var_6 = (short)14820;
short var_8 = (short)18497;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)18479;
int zero = 0;
short var_12 = (short)11962;
unsigned int var_13 = 162442027U;
unsigned char var_14 = (unsigned char)53;
int var_15 = 1198677416;
int var_16 = -2130955711;
signed char var_17 = (signed char)53;
signed char var_18 = (signed char)8;
signed char var_19 = (signed char)73;
_Bool var_20 = (_Bool)1;
unsigned int arr_1 [14] ;
_Bool arr_3 [14] ;
short arr_4 [14] [14] ;
unsigned long long int arr_5 [14] [14] ;
unsigned short arr_8 [11] ;
signed char arr_15 [11] [11] [11] [11] [11] ;
signed char arr_18 [11] [11] ;
signed char arr_19 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 383852567U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-12528;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 17113368206728811307ULL : 4169575690739726119ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned short)41659;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-27 : (signed char)-105;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (signed char)48 : (signed char)36;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
