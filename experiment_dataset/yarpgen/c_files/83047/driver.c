#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13826;
short var_4 = (short)-17642;
unsigned short var_5 = (unsigned short)63062;
short var_8 = (short)7332;
signed char var_12 = (signed char)107;
int zero = 0;
unsigned short var_13 = (unsigned short)37955;
short var_14 = (short)-2327;
unsigned short var_15 = (unsigned short)33795;
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
