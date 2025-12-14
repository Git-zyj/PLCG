#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30620;
unsigned long long int var_4 = 13068889748926988244ULL;
_Bool var_5 = (_Bool)0;
long long int var_9 = 4767776559201286045LL;
unsigned short var_11 = (unsigned short)45692;
int zero = 0;
unsigned short var_12 = (unsigned short)12912;
unsigned long long int var_13 = 14893410270330491479ULL;
long long int var_14 = -7512659949911751354LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
