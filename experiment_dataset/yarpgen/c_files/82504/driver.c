#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_7 = (unsigned char)175;
short var_14 = (short)-15059;
unsigned long long int var_16 = 1975031631020485583ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)6763;
unsigned int var_18 = 2572541851U;
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
