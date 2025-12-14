#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7656104363748351755LL;
unsigned long long int var_2 = 14262780201346055655ULL;
unsigned int var_9 = 705567663U;
long long int var_14 = -6454384291667791099LL;
int zero = 0;
short var_15 = (short)17390;
long long int var_16 = -864053699048213306LL;
unsigned int var_17 = 2719005717U;
unsigned long long int var_18 = 999923482356941478ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
