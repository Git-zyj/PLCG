#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 639845655;
unsigned long long int var_3 = 12741143830280079860ULL;
int zero = 0;
unsigned long long int var_13 = 7689669336928954805ULL;
unsigned short var_14 = (unsigned short)22524;
unsigned int var_15 = 2878330300U;
void init() {
}

void checksum() {
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
