#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42289;
short var_9 = (short)6312;
unsigned long long int var_12 = 3934839439135628684ULL;
int zero = 0;
unsigned int var_14 = 3037199842U;
short var_15 = (short)-17734;
int var_16 = -1075943069;
int var_17 = -496637033;
void init() {
}

void checksum() {
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
