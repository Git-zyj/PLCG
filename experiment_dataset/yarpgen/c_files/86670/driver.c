#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2119700177;
unsigned char var_1 = (unsigned char)15;
unsigned int var_3 = 3401321205U;
unsigned char var_4 = (unsigned char)252;
signed char var_5 = (signed char)120;
unsigned int var_7 = 2281147957U;
short var_9 = (short)1752;
signed char var_10 = (signed char)15;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 3077781643U;
long long int var_13 = -8099454030673539498LL;
short var_14 = (short)-22288;
int var_15 = 2060669283;
unsigned int arr_1 [14] [14] ;
unsigned int arr_3 [14] [14] ;
signed char arr_5 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 1992790919U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 2413067347U : 2043245600U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)-116;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
