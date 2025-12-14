#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16933;
unsigned short var_5 = (unsigned short)22862;
unsigned short var_6 = (unsigned short)51626;
unsigned int var_10 = 3512350200U;
unsigned int var_17 = 1137253077U;
int zero = 0;
unsigned short var_18 = (unsigned short)26077;
signed char var_19 = (signed char)30;
unsigned short var_20 = (unsigned short)73;
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
