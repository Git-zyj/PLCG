#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1309024625U;
unsigned long long int var_3 = 16062233550297456236ULL;
unsigned int var_4 = 3152656548U;
unsigned char var_6 = (unsigned char)36;
unsigned char var_10 = (unsigned char)55;
int zero = 0;
unsigned long long int var_17 = 16667930652153508381ULL;
unsigned char var_18 = (unsigned char)242;
unsigned int var_19 = 1991772232U;
unsigned char var_20 = (unsigned char)135;
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
