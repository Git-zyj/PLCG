#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3997608399U;
unsigned char var_9 = (unsigned char)248;
short var_10 = (short)32083;
unsigned long long int var_14 = 11728323473533726060ULL;
int zero = 0;
unsigned int var_17 = 2113240553U;
long long int var_18 = -7030791746915378223LL;
unsigned int var_19 = 1775221753U;
unsigned char var_20 = (unsigned char)114;
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
