#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1865893198;
unsigned short var_8 = (unsigned short)48728;
unsigned short var_10 = (unsigned short)56912;
unsigned short var_12 = (unsigned short)63199;
int zero = 0;
short var_14 = (short)-27754;
unsigned long long int var_15 = 3584073159739102903ULL;
long long int var_16 = -7097878259716518955LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
