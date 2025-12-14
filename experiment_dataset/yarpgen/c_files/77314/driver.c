#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 2510666322589902687LL;
unsigned short var_8 = (unsigned short)26916;
unsigned short var_12 = (unsigned short)22330;
signed char var_16 = (signed char)-100;
int zero = 0;
short var_17 = (short)-13934;
short var_18 = (short)-22651;
short var_19 = (short)31199;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
