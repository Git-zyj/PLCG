#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-728;
long long int var_4 = 2419571326994263120LL;
unsigned long long int var_8 = 6748721148986544186ULL;
unsigned long long int var_12 = 11532377426736026426ULL;
long long int var_14 = 7764265517050584449LL;
int zero = 0;
short var_17 = (short)30919;
unsigned long long int var_18 = 13760007778641955456ULL;
unsigned int var_19 = 418440823U;
unsigned short var_20 = (unsigned short)2504;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
