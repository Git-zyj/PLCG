#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -972976384;
unsigned int var_13 = 442478317U;
int zero = 0;
unsigned int var_14 = 1841003658U;
unsigned short var_15 = (unsigned short)49229;
unsigned long long int var_16 = 11777219932783687983ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
