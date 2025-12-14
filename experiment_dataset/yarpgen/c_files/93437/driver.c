#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8999;
short var_6 = (short)-14092;
short var_7 = (short)11768;
unsigned short var_14 = (unsigned short)18811;
int zero = 0;
long long int var_19 = -3923837542946328377LL;
short var_20 = (short)-1584;
unsigned long long int var_21 = 2155280097222950782ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
