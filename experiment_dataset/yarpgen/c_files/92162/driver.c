#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1885502672U;
long long int var_2 = 3989645117892745460LL;
long long int var_3 = -5364290482957583606LL;
unsigned short var_6 = (unsigned short)42762;
unsigned short var_12 = (unsigned short)49103;
unsigned short var_13 = (unsigned short)48226;
short var_14 = (short)-4582;
unsigned char var_15 = (unsigned char)92;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-7019;
unsigned long long int var_19 = 3677263931976007317ULL;
unsigned short var_20 = (unsigned short)8792;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
