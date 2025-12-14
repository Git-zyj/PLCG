#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
_Bool var_12 = (_Bool)1;
long long int var_13 = -3681568947285301943LL;
int zero = 0;
unsigned short var_14 = (unsigned short)3772;
unsigned int var_15 = 112459591U;
unsigned char var_16 = (unsigned char)179;
unsigned int var_17 = 4050897936U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
