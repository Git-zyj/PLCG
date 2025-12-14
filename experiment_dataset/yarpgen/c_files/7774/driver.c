#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1914081386;
unsigned char var_7 = (unsigned char)130;
unsigned int var_10 = 1791128575U;
short var_12 = (short)20754;
int zero = 0;
long long int var_17 = -4544659824914656522LL;
unsigned long long int var_18 = 2649291424522033309ULL;
unsigned long long int var_19 = 14304572958517872585ULL;
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
