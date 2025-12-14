#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)20;
unsigned short var_2 = (unsigned short)41317;
short var_6 = (short)-16377;
unsigned short var_7 = (unsigned short)42455;
unsigned short var_8 = (unsigned short)18936;
unsigned short var_12 = (unsigned short)55295;
int zero = 0;
unsigned short var_15 = (unsigned short)35418;
unsigned short var_16 = (unsigned short)31625;
int var_17 = 1767306471;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
