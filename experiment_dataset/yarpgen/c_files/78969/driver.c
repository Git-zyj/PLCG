#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3810738366U;
unsigned char var_6 = (unsigned char)200;
unsigned int var_8 = 3710222145U;
unsigned short var_14 = (unsigned short)23393;
unsigned char var_15 = (unsigned char)251;
int zero = 0;
short var_16 = (short)20341;
int var_17 = 899022899;
signed char var_18 = (signed char)-124;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
