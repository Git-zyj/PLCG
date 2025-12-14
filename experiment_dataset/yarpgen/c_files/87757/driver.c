#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1479707298;
long long int var_1 = 6452392821209467844LL;
short var_2 = (short)-31589;
unsigned long long int var_4 = 12478373645790168927ULL;
int var_5 = 1682388851;
unsigned long long int var_6 = 17748186965125645565ULL;
unsigned long long int var_7 = 3057986415226574982ULL;
unsigned long long int var_8 = 6340157682925378224ULL;
long long int var_9 = -4690247282252145336LL;
int zero = 0;
short var_10 = (short)3702;
unsigned int var_11 = 79361272U;
unsigned int var_12 = 2066948759U;
int var_13 = 78176885;
long long int var_14 = -2461136022800230586LL;
unsigned char arr_2 [21] ;
short arr_4 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)25113;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
