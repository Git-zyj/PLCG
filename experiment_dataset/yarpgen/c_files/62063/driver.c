#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1791102874;
long long int var_3 = 3737550269966682685LL;
unsigned int var_5 = 1909190620U;
signed char var_6 = (signed char)42;
int var_11 = -1915702740;
short var_13 = (short)-16803;
int zero = 0;
unsigned char var_20 = (unsigned char)253;
short var_21 = (short)32732;
unsigned char var_22 = (unsigned char)74;
unsigned int var_23 = 1640394053U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
