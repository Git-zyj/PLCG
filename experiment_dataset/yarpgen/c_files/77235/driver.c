#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30467;
signed char var_2 = (signed char)-61;
signed char var_3 = (signed char)-38;
short var_4 = (short)-20131;
_Bool var_6 = (_Bool)1;
long long int var_7 = 4315143777126516043LL;
unsigned char var_8 = (unsigned char)119;
int var_9 = 1718657274;
signed char var_11 = (signed char)21;
unsigned int var_12 = 888128268U;
signed char var_17 = (signed char)-80;
int zero = 0;
signed char var_18 = (signed char)24;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 795291766U;
unsigned long long int var_21 = 12617418436024897129ULL;
long long int var_22 = 5089773252993174279LL;
signed char arr_0 [13] [13] ;
unsigned long long int arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 467784485710595466ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
