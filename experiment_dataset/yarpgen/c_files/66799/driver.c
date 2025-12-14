#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1347129072;
short var_7 = (short)-336;
unsigned char var_11 = (unsigned char)124;
unsigned int var_14 = 2507323102U;
int var_15 = -590954543;
int zero = 0;
unsigned short var_16 = (unsigned short)62494;
unsigned long long int var_17 = 15625110495901122042ULL;
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
