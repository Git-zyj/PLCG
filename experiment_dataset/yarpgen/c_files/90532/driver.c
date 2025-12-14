#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)4;
unsigned short var_6 = (unsigned short)1476;
unsigned char var_7 = (unsigned char)92;
unsigned char var_10 = (unsigned char)78;
unsigned short var_12 = (unsigned short)50370;
unsigned short var_14 = (unsigned short)3997;
int zero = 0;
unsigned char var_15 = (unsigned char)241;
unsigned char var_16 = (unsigned char)175;
unsigned short var_17 = (unsigned short)11702;
unsigned short var_18 = (unsigned short)35133;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
