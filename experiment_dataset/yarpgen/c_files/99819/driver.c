#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)43639;
unsigned short var_5 = (unsigned short)51632;
unsigned short var_10 = (unsigned short)6472;
unsigned short var_11 = (unsigned short)31499;
unsigned short var_13 = (unsigned short)28074;
unsigned short var_14 = (unsigned short)48540;
unsigned short var_15 = (unsigned short)61997;
int zero = 0;
unsigned short var_16 = (unsigned short)48780;
unsigned short var_17 = (unsigned short)48935;
unsigned short var_18 = (unsigned short)21498;
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
