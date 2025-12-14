#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-64;
unsigned short var_7 = (unsigned short)56265;
unsigned char var_10 = (unsigned char)107;
int zero = 0;
short var_13 = (short)-7093;
unsigned int var_14 = 3770154526U;
short var_15 = (short)12642;
void init() {
}

void checksum() {
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
