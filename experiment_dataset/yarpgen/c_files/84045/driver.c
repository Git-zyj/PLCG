#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)2378;
unsigned long long int var_10 = 13541977272536459734ULL;
unsigned short var_11 = (unsigned short)32806;
unsigned short var_13 = (unsigned short)8796;
int zero = 0;
unsigned long long int var_14 = 515498061490083393ULL;
unsigned short var_15 = (unsigned short)25555;
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
