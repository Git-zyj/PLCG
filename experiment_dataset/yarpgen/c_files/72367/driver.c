#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 14132290869886470448ULL;
unsigned int var_6 = 2339473987U;
int var_8 = -2046524342;
unsigned short var_13 = (unsigned short)61738;
int zero = 0;
unsigned char var_16 = (unsigned char)171;
unsigned short var_17 = (unsigned short)45;
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
