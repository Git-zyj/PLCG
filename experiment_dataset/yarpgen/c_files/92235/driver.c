#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2400857306U;
unsigned long long int var_3 = 1320449465016953986ULL;
unsigned int var_8 = 2213066198U;
unsigned int var_9 = 59359794U;
int zero = 0;
unsigned long long int var_11 = 325082785662521342ULL;
int var_12 = -1900458355;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
