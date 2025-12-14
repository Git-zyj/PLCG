#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3968952235U;
short var_10 = (short)-17396;
long long int var_14 = 335634287885658938LL;
int zero = 0;
unsigned int var_15 = 3101544993U;
int var_16 = -2000969074;
unsigned int var_17 = 1205934911U;
void init() {
}

void checksum() {
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
