#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)7023;
unsigned short var_3 = (unsigned short)33298;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 295295083758689954ULL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)10341;
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
