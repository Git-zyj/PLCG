#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)0;
unsigned short var_5 = (unsigned short)22229;
short var_7 = (short)-12141;
int zero = 0;
unsigned char var_12 = (unsigned char)96;
unsigned short var_13 = (unsigned short)8448;
short var_14 = (short)6080;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
