#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 480087689481754845LL;
short var_1 = (short)6189;
unsigned int var_2 = 3450442810U;
short var_5 = (short)11786;
unsigned short var_9 = (unsigned short)18688;
int zero = 0;
unsigned short var_15 = (unsigned short)23259;
short var_16 = (short)14773;
unsigned short var_17 = (unsigned short)36004;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
