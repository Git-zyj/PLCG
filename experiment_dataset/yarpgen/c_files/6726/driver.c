#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2447257280U;
unsigned short var_3 = (unsigned short)37740;
signed char var_10 = (signed char)-14;
int zero = 0;
short var_12 = (short)3692;
short var_13 = (short)-18749;
int var_14 = -490310753;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
