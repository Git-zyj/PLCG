#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32480;
unsigned char var_1 = (unsigned char)228;
unsigned int var_2 = 819794900U;
signed char var_3 = (signed char)-32;
unsigned short var_4 = (unsigned short)2762;
int var_5 = -836105636;
unsigned char var_6 = (unsigned char)223;
unsigned char var_8 = (unsigned char)152;
unsigned short var_10 = (unsigned short)46612;
int zero = 0;
int var_11 = 652618975;
signed char var_12 = (signed char)12;
unsigned long long int var_13 = 5188679985544530295ULL;
short var_14 = (short)-11968;
int var_15 = -517033105;
unsigned char var_16 = (unsigned char)29;
short arr_0 [12] ;
unsigned short arr_3 [12] ;
unsigned char arr_10 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)13392;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)4837;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)205;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
