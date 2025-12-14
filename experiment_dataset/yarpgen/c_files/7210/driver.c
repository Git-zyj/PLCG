#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)158;
short var_6 = (short)-19518;
unsigned short var_7 = (unsigned short)48603;
unsigned char var_9 = (unsigned char)212;
unsigned long long int var_10 = 17692087548407800735ULL;
unsigned char var_12 = (unsigned char)203;
unsigned int var_15 = 595053418U;
int zero = 0;
short var_16 = (short)14742;
unsigned long long int var_17 = 12601408375198942021ULL;
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
