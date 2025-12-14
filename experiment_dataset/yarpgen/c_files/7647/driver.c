#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)82;
unsigned char var_5 = (unsigned char)205;
int var_7 = 779314769;
short var_15 = (short)-18422;
int zero = 0;
unsigned int var_20 = 1618022587U;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)2880;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
