#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-29341;
signed char var_6 = (signed char)-49;
unsigned short var_10 = (unsigned short)58646;
unsigned short var_13 = (unsigned short)40011;
int var_14 = 442352243;
short var_16 = (short)29498;
int zero = 0;
unsigned short var_17 = (unsigned short)45552;
unsigned char var_18 = (unsigned char)176;
void init() {
}

void checksum() {
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
