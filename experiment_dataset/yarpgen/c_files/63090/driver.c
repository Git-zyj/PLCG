#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4323199536597324872LL;
int var_7 = 1892461199;
short var_9 = (short)-10798;
int var_12 = -1795771542;
int zero = 0;
unsigned int var_15 = 980580790U;
unsigned int var_16 = 1249710100U;
unsigned char var_17 = (unsigned char)246;
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
