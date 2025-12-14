#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5330145635646362316LL;
unsigned char var_5 = (unsigned char)71;
unsigned short var_11 = (unsigned short)25941;
int zero = 0;
unsigned int var_12 = 857005214U;
unsigned int var_13 = 1314828839U;
short var_14 = (short)-22603;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
