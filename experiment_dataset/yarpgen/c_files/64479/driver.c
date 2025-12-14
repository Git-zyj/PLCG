#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56593;
long long int var_5 = 7163342197522461021LL;
long long int var_7 = -8965791179309580649LL;
short var_8 = (short)25307;
short var_9 = (short)30339;
unsigned char var_10 = (unsigned char)152;
int var_12 = -1405716300;
int zero = 0;
long long int var_13 = 9138153511735189361LL;
unsigned int var_14 = 4238721765U;
short var_15 = (short)-13811;
unsigned int var_16 = 4090864514U;
long long int var_17 = -3564888503217153148LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
