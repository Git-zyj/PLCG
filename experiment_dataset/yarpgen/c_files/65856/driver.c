#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23237;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-15855;
signed char var_10 = (signed char)33;
long long int var_11 = 4614106934217910971LL;
int var_12 = 1249358887;
int zero = 0;
unsigned long long int var_14 = 12576375057220055928ULL;
short var_15 = (short)-4677;
unsigned long long int var_16 = 16914237150592749229ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
