#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17078182520455477747ULL;
unsigned long long int var_4 = 13299801989107743339ULL;
unsigned long long int var_8 = 2903931963996997247ULL;
unsigned long long int var_9 = 1082914882887108505ULL;
int zero = 0;
unsigned long long int var_10 = 16701775736672684837ULL;
unsigned long long int var_11 = 6973494586074144483ULL;
unsigned long long int var_12 = 16431790863439983126ULL;
unsigned long long int var_13 = 10451125253034758712ULL;
unsigned long long int arr_1 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 14158967274504629610ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
