#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31183;
unsigned int var_4 = 88644829U;
short var_8 = (short)2699;
unsigned char var_10 = (unsigned char)217;
int zero = 0;
unsigned short var_12 = (unsigned short)34796;
unsigned char var_13 = (unsigned char)118;
signed char var_14 = (signed char)48;
short var_15 = (short)-7072;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
