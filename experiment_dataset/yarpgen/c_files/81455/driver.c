#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)218;
unsigned char var_1 = (unsigned char)238;
_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)64331;
int var_10 = 1095574184;
int var_11 = -2078959707;
int zero = 0;
short var_12 = (short)-945;
short var_13 = (short)24317;
unsigned long long int var_14 = 3322395932111034287ULL;
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
