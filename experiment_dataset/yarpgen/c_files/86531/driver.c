#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7145852200813332915ULL;
unsigned short var_3 = (unsigned short)8532;
unsigned long long int var_5 = 3098520088049448523ULL;
unsigned long long int var_10 = 16694300049615843877ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)12726;
short var_13 = (short)24722;
short var_14 = (short)6554;
unsigned short var_15 = (unsigned short)39389;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
