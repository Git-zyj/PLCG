#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31834;
unsigned int var_4 = 1475275347U;
int var_8 = 376650345;
long long int var_10 = 4671587754682283318LL;
short var_11 = (short)-16711;
int var_14 = -1789742563;
unsigned char var_16 = (unsigned char)110;
int zero = 0;
short var_17 = (short)-5201;
unsigned long long int var_18 = 15904452127540852238ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
