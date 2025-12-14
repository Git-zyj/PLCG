#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
int var_9 = 1725803242;
unsigned int var_13 = 1013105631U;
unsigned int var_14 = 2520228531U;
unsigned char var_15 = (unsigned char)200;
int zero = 0;
unsigned long long int var_16 = 406781664520052752ULL;
short var_17 = (short)-11830;
void init() {
}

void checksum() {
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
