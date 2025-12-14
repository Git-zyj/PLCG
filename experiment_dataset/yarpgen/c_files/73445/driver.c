#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1013977966;
unsigned char var_6 = (unsigned char)236;
int var_7 = 147149281;
long long int var_8 = -2355945313164041951LL;
int var_10 = 462836270;
int var_12 = 1406827802;
int zero = 0;
long long int var_14 = 5015455472460500561LL;
unsigned char var_15 = (unsigned char)63;
int var_16 = 129441882;
signed char var_17 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
