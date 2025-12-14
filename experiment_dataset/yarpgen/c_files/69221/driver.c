#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17246721023538616480ULL;
unsigned int var_6 = 1330058648U;
short var_9 = (short)19018;
int zero = 0;
unsigned char var_14 = (unsigned char)88;
unsigned char var_15 = (unsigned char)213;
unsigned int var_16 = 1154822793U;
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
