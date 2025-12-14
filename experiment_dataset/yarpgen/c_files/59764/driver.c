#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11652;
int var_7 = -128621515;
long long int var_10 = -2611533655176193658LL;
short var_14 = (short)-8471;
int zero = 0;
unsigned long long int var_15 = 7424879760617703076ULL;
long long int var_16 = -5624418847704644826LL;
unsigned char var_17 = (unsigned char)136;
void init() {
}

void checksum() {
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
