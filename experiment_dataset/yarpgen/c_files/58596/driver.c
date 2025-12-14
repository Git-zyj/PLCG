#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 469960478U;
short var_2 = (short)-11893;
unsigned int var_3 = 730265796U;
short var_5 = (short)31712;
unsigned int var_14 = 2409534376U;
int zero = 0;
short var_15 = (short)19661;
unsigned int var_16 = 2253390577U;
int var_17 = 605896865;
short var_18 = (short)-32462;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
