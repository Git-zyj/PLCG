#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1813543116;
short var_1 = (short)-12064;
unsigned int var_8 = 3497608646U;
int var_9 = 556259971;
int zero = 0;
signed char var_16 = (signed char)36;
short var_17 = (short)-15278;
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
