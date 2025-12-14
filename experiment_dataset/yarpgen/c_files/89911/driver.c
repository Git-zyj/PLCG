#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_6 = 2010566039;
short var_8 = (short)-20060;
_Bool var_9 = (_Bool)1;
short var_12 = (short)-5857;
unsigned long long int var_13 = 6138908262629824723ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)20538;
unsigned char var_16 = (unsigned char)24;
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
