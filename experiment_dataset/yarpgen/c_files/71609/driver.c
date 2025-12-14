#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -73494778;
int var_1 = 950156999;
unsigned char var_3 = (unsigned char)218;
long long int var_4 = 4796246130668740545LL;
short var_5 = (short)-23608;
int var_7 = 137057679;
int var_8 = -1299196564;
unsigned short var_9 = (unsigned short)2346;
unsigned short var_11 = (unsigned short)14285;
int var_12 = 158405229;
unsigned short var_13 = (unsigned short)11827;
int zero = 0;
int var_16 = -971538998;
signed char var_17 = (signed char)-63;
unsigned char var_18 = (unsigned char)73;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)23231;
unsigned char arr_7 [15] ;
_Bool arr_8 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
