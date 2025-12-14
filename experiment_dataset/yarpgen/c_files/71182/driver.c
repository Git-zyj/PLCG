#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)205;
int var_6 = -841320708;
signed char var_14 = (signed char)-78;
unsigned short var_15 = (unsigned short)9896;
int zero = 0;
unsigned long long int var_19 = 16364565419600712198ULL;
int var_20 = 318980417;
unsigned long long int var_21 = 4719650223555804364ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
