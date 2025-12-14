#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)730;
unsigned char var_4 = (unsigned char)198;
short var_5 = (short)-16123;
signed char var_8 = (signed char)-99;
unsigned long long int var_11 = 16198860274119498042ULL;
long long int var_13 = 7439791021937580445LL;
int zero = 0;
short var_16 = (short)21667;
unsigned short var_17 = (unsigned short)33937;
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
