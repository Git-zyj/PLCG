#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)113;
short var_5 = (short)-31024;
short var_6 = (short)-32261;
signed char var_7 = (signed char)76;
unsigned int var_8 = 1321599447U;
unsigned char var_10 = (unsigned char)33;
int zero = 0;
int var_14 = 992027299;
short var_15 = (short)-23851;
void init() {
}

void checksum() {
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
