#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4193251760U;
unsigned int var_5 = 1368645613U;
signed char var_10 = (signed char)-14;
unsigned long long int var_11 = 18219662503158482927ULL;
long long int var_12 = 1721487980864937788LL;
signed char var_18 = (signed char)33;
int zero = 0;
unsigned short var_20 = (unsigned short)16053;
unsigned char var_21 = (unsigned char)132;
void init() {
}

void checksum() {
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
