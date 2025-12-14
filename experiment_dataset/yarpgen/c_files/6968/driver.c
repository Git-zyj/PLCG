#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)6236;
short var_3 = (short)8001;
unsigned short var_5 = (unsigned short)21278;
unsigned char var_7 = (unsigned char)144;
unsigned short var_8 = (unsigned short)3612;
long long int var_11 = 2296011440839106609LL;
int zero = 0;
unsigned char var_12 = (unsigned char)124;
unsigned char var_13 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
