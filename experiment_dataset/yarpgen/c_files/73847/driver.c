#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14499;
unsigned short var_1 = (unsigned short)2498;
int var_2 = 536683201;
signed char var_5 = (signed char)-94;
unsigned int var_8 = 3672937949U;
int zero = 0;
unsigned int var_10 = 1184816265U;
unsigned long long int var_11 = 16011098528257937768ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
