#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7513840988652197149ULL;
long long int var_7 = 3234366621492264355LL;
unsigned int var_8 = 1439785187U;
long long int var_15 = 1304480660021920513LL;
short var_16 = (short)16092;
int zero = 0;
unsigned int var_18 = 2269015021U;
unsigned short var_19 = (unsigned short)61333;
signed char var_20 = (signed char)-62;
void init() {
}

void checksum() {
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
