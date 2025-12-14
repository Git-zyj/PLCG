#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2239352470U;
unsigned long long int var_4 = 638069042472022388ULL;
unsigned char var_5 = (unsigned char)170;
unsigned long long int var_8 = 1586009321694616381ULL;
unsigned long long int var_9 = 2396549754523050466ULL;
unsigned char var_11 = (unsigned char)141;
unsigned long long int var_13 = 7198009465181071432ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)21;
int var_15 = 1235921594;
unsigned int var_16 = 4194503369U;
unsigned long long int var_17 = 12073525584205098790ULL;
unsigned int var_18 = 858486443U;
unsigned int var_19 = 1256194234U;
long long int var_20 = -4758392247739599411LL;
int arr_0 [21] [21] ;
unsigned int arr_1 [21] ;
short arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 1237391224 : -2130025174;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 710627813U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (short)10270;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
