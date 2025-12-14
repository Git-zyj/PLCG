#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)129;
unsigned short var_7 = (unsigned short)33384;
signed char var_8 = (signed char)111;
long long int var_13 = -4819030379135073546LL;
int zero = 0;
unsigned short var_16 = (unsigned short)9700;
short var_17 = (short)-20756;
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
