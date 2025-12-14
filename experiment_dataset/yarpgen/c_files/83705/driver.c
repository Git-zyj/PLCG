#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1917347083U;
int var_4 = 1142515813;
unsigned long long int var_10 = 4484421600366072996ULL;
int zero = 0;
unsigned int var_12 = 866083163U;
int var_13 = 887474491;
unsigned int var_14 = 3553683899U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
