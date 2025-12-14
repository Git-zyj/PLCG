#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-19593;
long long int var_8 = -4082582734504399077LL;
unsigned int var_12 = 580709207U;
int zero = 0;
unsigned int var_17 = 1194694585U;
long long int var_18 = 2012312587724510824LL;
unsigned int var_19 = 1855211510U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
