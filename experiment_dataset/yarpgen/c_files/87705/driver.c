#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24855;
unsigned char var_1 = (unsigned char)15;
unsigned char var_3 = (unsigned char)150;
unsigned int var_5 = 4162665771U;
short var_11 = (short)5282;
unsigned long long int var_12 = 13239558331389677428ULL;
int zero = 0;
unsigned int var_14 = 2001120271U;
unsigned long long int var_15 = 11021080211287341595ULL;
unsigned short var_16 = (unsigned short)11133;
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
