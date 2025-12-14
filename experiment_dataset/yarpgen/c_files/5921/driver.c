#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 2049186539;
unsigned char var_7 = (unsigned char)67;
short var_9 = (short)-16950;
short var_11 = (short)-18552;
short var_12 = (short)31998;
int zero = 0;
unsigned short var_15 = (unsigned short)3358;
unsigned char var_16 = (unsigned char)236;
long long int var_17 = -8918146949127988733LL;
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
