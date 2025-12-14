#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-14;
unsigned short var_4 = (unsigned short)36596;
short var_5 = (short)30969;
unsigned char var_7 = (unsigned char)255;
short var_8 = (short)26647;
unsigned short var_13 = (unsigned short)26491;
int zero = 0;
unsigned short var_15 = (unsigned short)39410;
signed char var_16 = (signed char)21;
void init() {
}

void checksum() {
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
