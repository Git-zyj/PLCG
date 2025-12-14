#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7650971753198176716ULL;
unsigned long long int var_6 = 13218028015016349507ULL;
short var_8 = (short)-10054;
short var_13 = (short)1021;
int zero = 0;
unsigned long long int var_14 = 14739759268440542358ULL;
short var_15 = (short)7335;
short var_16 = (short)-19847;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
