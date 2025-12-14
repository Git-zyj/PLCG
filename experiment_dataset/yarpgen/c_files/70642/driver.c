#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)99;
signed char var_3 = (signed char)75;
signed char var_4 = (signed char)-28;
int var_5 = -218915845;
_Bool var_7 = (_Bool)1;
unsigned long long int var_11 = 10045660701055217237ULL;
unsigned int var_12 = 776705549U;
unsigned char var_13 = (unsigned char)25;
signed char var_14 = (signed char)-26;
long long int var_15 = -8960906622241190360LL;
unsigned short var_16 = (unsigned short)229;
signed char var_18 = (signed char)64;
int zero = 0;
unsigned int var_20 = 812225603U;
int var_21 = -1040774574;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-19601;
unsigned char var_24 = (unsigned char)175;
short var_25 = (short)-29835;
short arr_0 [21] ;
unsigned short arr_1 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-26067;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)35000;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
