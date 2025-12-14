#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18607;
signed char var_1 = (signed char)86;
int var_9 = -663099163;
unsigned char var_11 = (unsigned char)234;
int zero = 0;
unsigned char var_14 = (unsigned char)82;
int var_15 = 1340004760;
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
