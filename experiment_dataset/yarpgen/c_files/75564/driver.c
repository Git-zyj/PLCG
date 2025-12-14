#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)78;
unsigned char var_4 = (unsigned char)238;
short var_8 = (short)30534;
unsigned char var_14 = (unsigned char)131;
unsigned short var_16 = (unsigned short)52769;
int zero = 0;
short var_17 = (short)-7446;
short var_18 = (short)14115;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
