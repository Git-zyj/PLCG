#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1750049263097478611ULL;
short var_6 = (short)11831;
unsigned long long int var_8 = 3980241012408973060ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)164;
unsigned char var_15 = (unsigned char)38;
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
