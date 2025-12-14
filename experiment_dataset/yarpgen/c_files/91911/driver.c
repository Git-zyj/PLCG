#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)246;
unsigned short var_8 = (unsigned short)8230;
short var_12 = (short)-8734;
unsigned int var_13 = 1784452214U;
int zero = 0;
unsigned char var_14 = (unsigned char)225;
short var_15 = (short)-14064;
signed char var_16 = (signed char)12;
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
