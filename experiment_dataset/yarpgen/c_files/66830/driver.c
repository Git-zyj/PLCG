#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-2606;
unsigned short var_4 = (unsigned short)26765;
unsigned char var_5 = (unsigned char)33;
int var_7 = 1362391269;
unsigned short var_8 = (unsigned short)26393;
long long int var_9 = 2825750207311987201LL;
short var_10 = (short)-23379;
int zero = 0;
unsigned long long int var_11 = 17526175487767877633ULL;
unsigned int var_12 = 28271772U;
int var_13 = -1717975678;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2735797224U;
unsigned char var_16 = (unsigned char)4;
long long int var_17 = -2709499738770389435LL;
int arr_0 [13] [13] ;
unsigned char arr_2 [13] ;
long long int arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 1803546034;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = -7122925904911587813LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
