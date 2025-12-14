#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)24360;
short var_6 = (short)-19366;
signed char var_11 = (signed char)100;
int zero = 0;
unsigned char var_12 = (unsigned char)250;
unsigned char var_13 = (unsigned char)127;
unsigned short var_14 = (unsigned short)25693;
unsigned short var_15 = (unsigned short)11497;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
