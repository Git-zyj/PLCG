#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14898;
unsigned long long int var_5 = 16970035699169284595ULL;
unsigned int var_12 = 3324310652U;
unsigned long long int var_14 = 11204664020453689581ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)9128;
unsigned long long int var_16 = 209586716610741368ULL;
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
