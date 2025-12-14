#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12398139697176328462ULL;
unsigned short var_4 = (unsigned short)44642;
unsigned short var_5 = (unsigned short)45603;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)146;
int zero = 0;
unsigned short var_11 = (unsigned short)46855;
int var_12 = -542952300;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
