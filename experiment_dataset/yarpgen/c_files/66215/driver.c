#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)10090;
short var_13 = (short)-25916;
int var_14 = 2087705334;
unsigned short var_15 = (unsigned short)42118;
unsigned int var_18 = 2550081182U;
int zero = 0;
int var_19 = 1596039795;
unsigned int var_20 = 3934013238U;
unsigned char var_21 = (unsigned char)97;
int var_22 = -1995439398;
unsigned long long int var_23 = 6833290485088950187ULL;
unsigned int arr_0 [14] [14] ;
long long int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 1674605124U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 6270973265773765263LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
