#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2459113455U;
long long int var_5 = -8139556018353703964LL;
unsigned short var_6 = (unsigned short)8044;
int var_11 = -389558378;
int var_12 = -1164739750;
int zero = 0;
int var_14 = 366656687;
unsigned int var_15 = 328198221U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
