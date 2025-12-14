#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 881740841U;
short var_2 = (short)10576;
long long int var_8 = -6506324181636897219LL;
unsigned long long int var_9 = 15214275540439651896ULL;
unsigned char var_13 = (unsigned char)185;
int zero = 0;
unsigned int var_16 = 3664247722U;
short var_17 = (short)-16564;
int var_18 = 259417798;
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
