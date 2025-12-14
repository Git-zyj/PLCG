#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11681;
short var_2 = (short)10190;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2538576659U;
unsigned int var_10 = 1965739075U;
_Bool var_13 = (_Bool)0;
int var_14 = -908821796;
int zero = 0;
long long int var_15 = -5784083055067384057LL;
unsigned char var_16 = (unsigned char)247;
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
