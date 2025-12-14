#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_13 = (short)-2440;
unsigned char var_14 = (unsigned char)132;
unsigned char var_17 = (unsigned char)222;
int zero = 0;
long long int var_20 = 6360308244969387171LL;
long long int var_21 = -570761278388359588LL;
unsigned char var_22 = (unsigned char)184;
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
