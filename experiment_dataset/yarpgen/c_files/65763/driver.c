#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)23573;
unsigned char var_15 = (unsigned char)161;
int zero = 0;
long long int var_19 = -4814869459310363981LL;
unsigned int var_20 = 1637057444U;
void init() {
}

void checksum() {
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
