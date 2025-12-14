#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2408628082429859851LL;
signed char var_6 = (signed char)7;
short var_13 = (short)24067;
short var_15 = (short)12243;
int zero = 0;
short var_19 = (short)-25372;
unsigned short var_20 = (unsigned short)45522;
int var_21 = -1772488248;
unsigned char var_22 = (unsigned char)61;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
