#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_13 = (unsigned short)34320;
unsigned char var_14 = (unsigned char)239;
unsigned char var_16 = (unsigned char)248;
int zero = 0;
int var_18 = -52440544;
signed char var_19 = (signed char)-33;
int var_20 = 1577252817;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
