#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5114121270721783390ULL;
long long int var_3 = -6297709076836124478LL;
short var_5 = (short)-7050;
unsigned short var_6 = (unsigned short)37132;
short var_7 = (short)-14900;
unsigned short var_8 = (unsigned short)46805;
unsigned short var_10 = (unsigned short)24133;
int zero = 0;
unsigned int var_14 = 929053882U;
signed char var_15 = (signed char)-21;
unsigned int var_16 = 1113359677U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
