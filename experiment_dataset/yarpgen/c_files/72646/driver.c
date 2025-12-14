#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_12 = 165345932U;
unsigned int var_13 = 668017150U;
unsigned int var_14 = 440885467U;
int zero = 0;
unsigned int var_16 = 2541047038U;
unsigned int var_17 = 2998535704U;
void init() {
}

void checksum() {
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
