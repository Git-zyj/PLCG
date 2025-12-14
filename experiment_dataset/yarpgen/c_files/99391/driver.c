#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2714319091U;
unsigned int var_11 = 3171192460U;
unsigned long long int var_13 = 16805606729721805141ULL;
short var_15 = (short)-13758;
unsigned long long int var_17 = 14679617254063847204ULL;
int zero = 0;
int var_19 = -1694047211;
short var_20 = (short)-7964;
short var_21 = (short)-6017;
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
