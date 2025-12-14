#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1609302382;
signed char var_6 = (signed char)79;
short var_7 = (short)-32415;
int var_10 = -1780001862;
int zero = 0;
unsigned int var_13 = 176691052U;
unsigned int var_14 = 4152360353U;
void init() {
}

void checksum() {
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
