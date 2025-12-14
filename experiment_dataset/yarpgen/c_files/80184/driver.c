#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_14 = 776690532;
unsigned char var_15 = (unsigned char)222;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 1633710790;
unsigned long long int var_18 = 8929380327641780434ULL;
unsigned int var_19 = 458397571U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
