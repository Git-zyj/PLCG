#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)20;
signed char var_2 = (signed char)-95;
unsigned char var_3 = (unsigned char)180;
long long int var_4 = 8382441964385703377LL;
short var_7 = (short)-27171;
unsigned int var_9 = 3440692388U;
unsigned short var_10 = (unsigned short)40783;
unsigned char var_11 = (unsigned char)180;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-8;
unsigned short var_14 = (unsigned short)45398;
signed char var_15 = (signed char)-12;
unsigned short var_16 = (unsigned short)23257;
int var_17 = -1308565372;
unsigned long long int var_18 = 6330431371968146684ULL;
short var_19 = (short)-1114;
unsigned long long int arr_2 [23] ;
short arr_3 [23] [23] [23] ;
short arr_6 [23] [23] [23] [23] ;
short arr_10 [23] [23] [23] [23] ;
signed char arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 971137647790609761ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-23426;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)12246;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)10073;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)87;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
