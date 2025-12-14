#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12417;
int var_2 = -777014070;
short var_5 = (short)31623;
short var_11 = (short)6222;
short var_14 = (short)-8227;
int zero = 0;
unsigned char var_16 = (unsigned char)238;
short var_17 = (short)-6821;
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
