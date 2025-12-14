#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)120;
unsigned long long int var_2 = 10503762056769887489ULL;
unsigned char var_4 = (unsigned char)6;
unsigned int var_5 = 3341846576U;
long long int var_10 = 8309823895478017958LL;
long long int var_12 = 7761965031612285271LL;
int zero = 0;
unsigned char var_13 = (unsigned char)7;
unsigned long long int var_14 = 3985610499603581008ULL;
unsigned short var_15 = (unsigned short)55753;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
