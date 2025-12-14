#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1821617492U;
unsigned int var_1 = 1713901667U;
int var_3 = -887772051;
unsigned short var_4 = (unsigned short)4442;
signed char var_5 = (signed char)42;
int var_6 = 197641315;
short var_8 = (short)-6733;
int zero = 0;
signed char var_10 = (signed char)-41;
unsigned short var_11 = (unsigned short)31971;
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
