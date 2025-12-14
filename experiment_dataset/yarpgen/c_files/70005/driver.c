#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1532116847;
unsigned short var_7 = (unsigned short)16121;
unsigned char var_14 = (unsigned char)46;
int zero = 0;
short var_15 = (short)-32183;
unsigned short var_16 = (unsigned short)36267;
int var_17 = -82938286;
void init() {
}

void checksum() {
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
