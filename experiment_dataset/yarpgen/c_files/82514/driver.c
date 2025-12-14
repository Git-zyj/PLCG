#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)33;
unsigned long long int var_10 = 16235371055846019831ULL;
unsigned int var_12 = 1896487102U;
int zero = 0;
unsigned long long int var_14 = 8771136913822090902ULL;
unsigned long long int var_15 = 5981472658258450563ULL;
unsigned int var_16 = 1057121334U;
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
