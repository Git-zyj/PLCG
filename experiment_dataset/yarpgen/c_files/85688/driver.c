#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7768755610690927924LL;
unsigned short var_4 = (unsigned short)37393;
unsigned int var_5 = 4001161965U;
int var_9 = 1238220788;
int zero = 0;
unsigned int var_10 = 972118126U;
unsigned int var_11 = 381789573U;
unsigned int arr_9 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 3427386392U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
