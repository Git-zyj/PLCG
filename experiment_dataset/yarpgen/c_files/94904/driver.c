#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_11 = (signed char)-16;
unsigned char var_12 = (unsigned char)167;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = 1985811475;
long long int var_15 = 1571212196599376371LL;
unsigned char var_16 = (unsigned char)100;
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
