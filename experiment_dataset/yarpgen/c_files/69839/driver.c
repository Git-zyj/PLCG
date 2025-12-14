#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9054;
unsigned short var_4 = (unsigned short)50;
short var_7 = (short)-32719;
unsigned short var_10 = (unsigned short)17362;
short var_11 = (short)25456;
short var_12 = (short)-21977;
int zero = 0;
unsigned short var_16 = (unsigned short)61895;
short var_17 = (short)27024;
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
