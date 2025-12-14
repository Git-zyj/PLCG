#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1621744612;
int var_2 = -1242024867;
unsigned short var_12 = (unsigned short)3232;
unsigned short var_13 = (unsigned short)3553;
int var_14 = 1808769604;
unsigned long long int var_15 = 10880428477794480911ULL;
int zero = 0;
long long int var_16 = 1645396279984438754LL;
unsigned int var_17 = 3927277803U;
unsigned char var_18 = (unsigned char)130;
unsigned int var_19 = 1618055166U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
