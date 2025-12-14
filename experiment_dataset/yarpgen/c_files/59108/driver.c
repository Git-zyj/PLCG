#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 58367687;
long long int var_4 = 818138486163823436LL;
short var_6 = (short)-10646;
unsigned long long int var_12 = 1701063067855174386ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)34534;
unsigned int var_14 = 2661761660U;
long long int var_15 = 6373910167612101625LL;
long long int var_16 = 5745842768490784275LL;
unsigned short var_17 = (unsigned short)19676;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
