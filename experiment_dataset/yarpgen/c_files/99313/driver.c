#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60359;
unsigned short var_1 = (unsigned short)59931;
unsigned short var_2 = (unsigned short)42749;
unsigned short var_4 = (unsigned short)13271;
unsigned short var_7 = (unsigned short)46593;
unsigned short var_9 = (unsigned short)18040;
unsigned short var_11 = (unsigned short)59921;
unsigned short var_12 = (unsigned short)39670;
unsigned short var_14 = (unsigned short)14306;
int zero = 0;
unsigned short var_15 = (unsigned short)33144;
unsigned short var_16 = (unsigned short)3717;
unsigned short var_17 = (unsigned short)34190;
unsigned short var_18 = (unsigned short)24866;
unsigned short var_19 = (unsigned short)50707;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
