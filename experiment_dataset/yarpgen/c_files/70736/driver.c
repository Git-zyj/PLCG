#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-9873;
unsigned short var_8 = (unsigned short)46428;
unsigned long long int var_14 = 7105214763962503241ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)15;
int var_17 = 774146418;
signed char var_18 = (signed char)110;
void init() {
}

void checksum() {
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
