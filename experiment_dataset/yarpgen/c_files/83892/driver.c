#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2293977143U;
unsigned int var_7 = 3726937798U;
short var_13 = (short)-12140;
unsigned char var_14 = (unsigned char)188;
signed char var_15 = (signed char)96;
int zero = 0;
unsigned int var_16 = 195323840U;
unsigned int var_17 = 4082485522U;
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
