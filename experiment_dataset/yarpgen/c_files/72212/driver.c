#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)2115;
int var_9 = 1112966488;
short var_11 = (short)13313;
unsigned short var_13 = (unsigned short)14968;
int zero = 0;
short var_14 = (short)24317;
long long int var_15 = -6862953987237701033LL;
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
