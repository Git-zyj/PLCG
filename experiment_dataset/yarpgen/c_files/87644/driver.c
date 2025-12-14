#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14015477306500726105ULL;
unsigned int var_3 = 4026744819U;
unsigned short var_14 = (unsigned short)13822;
int zero = 0;
unsigned long long int var_15 = 14697815365529516599ULL;
long long int var_16 = -3484157053189845680LL;
void init() {
}

void checksum() {
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
