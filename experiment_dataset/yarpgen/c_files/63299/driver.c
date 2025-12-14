#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_6 = -911304174869437851LL;
unsigned short var_8 = (unsigned short)64126;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)11982;
unsigned char var_16 = (unsigned char)230;
int zero = 0;
unsigned short var_17 = (unsigned short)515;
short var_18 = (short)-26574;
unsigned short var_19 = (unsigned short)64802;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-30707;
unsigned short arr_0 [16] ;
short arr_1 [16] [16] ;
unsigned short arr_2 [16] ;
signed char arr_4 [16] [16] ;
short arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)38320;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)17080;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)44312;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)2918;
}

void checksum() {
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
