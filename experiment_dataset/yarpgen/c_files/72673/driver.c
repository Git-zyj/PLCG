#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)191;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-22;
signed char var_8 = (signed char)14;
short var_10 = (short)-20222;
unsigned int var_11 = 17948570U;
int zero = 0;
unsigned char var_15 = (unsigned char)173;
unsigned short var_16 = (unsigned short)48473;
short var_17 = (short)-14962;
void init() {
}

void checksum() {
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
