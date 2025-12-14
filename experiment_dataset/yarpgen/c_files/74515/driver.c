#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15942393975858926865ULL;
int var_5 = 1951385597;
unsigned char var_9 = (unsigned char)193;
short var_13 = (short)-3603;
long long int var_14 = -1350729390254973301LL;
int zero = 0;
unsigned char var_16 = (unsigned char)179;
short var_17 = (short)24171;
signed char var_18 = (signed char)-15;
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
