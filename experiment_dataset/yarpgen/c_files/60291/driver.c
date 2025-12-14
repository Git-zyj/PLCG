#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1761856550U;
unsigned int var_6 = 473262652U;
unsigned char var_7 = (unsigned char)135;
unsigned int var_10 = 3281856042U;
unsigned int var_12 = 3609885507U;
int zero = 0;
unsigned int var_14 = 2364363210U;
unsigned int var_15 = 805762006U;
void init() {
}

void checksum() {
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
