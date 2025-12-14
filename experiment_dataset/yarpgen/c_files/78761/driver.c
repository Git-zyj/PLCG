#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6649;
unsigned int var_5 = 1906208901U;
long long int var_8 = 2091771750722663846LL;
signed char var_10 = (signed char)48;
int zero = 0;
unsigned long long int var_20 = 7999799130828431655ULL;
unsigned char var_21 = (unsigned char)207;
unsigned short var_22 = (unsigned short)33111;
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
