#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-750;
short var_6 = (short)-13152;
unsigned short var_10 = (unsigned short)63553;
int zero = 0;
short var_16 = (short)-9044;
unsigned short var_17 = (unsigned short)38934;
unsigned char var_18 = (unsigned char)5;
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
