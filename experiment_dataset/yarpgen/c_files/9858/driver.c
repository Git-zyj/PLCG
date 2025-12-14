#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5099941606179234041LL;
short var_4 = (short)-7410;
unsigned long long int var_11 = 3596619759152456903ULL;
unsigned short var_12 = (unsigned short)35729;
unsigned long long int var_19 = 13835595996526480797ULL;
int zero = 0;
long long int var_20 = -9128761425575750312LL;
unsigned long long int var_21 = 16047499557314525393ULL;
unsigned long long int var_22 = 14727878976318262396ULL;
short var_23 = (short)-23510;
unsigned int arr_0 [10] ;
short arr_3 [10] ;
int arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 705644915U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)108;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 822149058 : 2074237288;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
