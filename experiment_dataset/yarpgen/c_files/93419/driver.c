#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12078391647465715874ULL;
short var_4 = (short)18305;
int var_12 = 808374474;
int var_14 = -850501641;
short var_15 = (short)13756;
unsigned long long int var_16 = 9948515528852164736ULL;
int zero = 0;
unsigned int var_17 = 4288353900U;
int var_18 = 656599911;
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
