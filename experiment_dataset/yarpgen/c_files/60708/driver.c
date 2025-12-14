#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_6 = 1619816094;
unsigned short var_9 = (unsigned short)7948;
long long int var_10 = -7747568593947907699LL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_15 = -3516492079019547575LL;
int var_16 = -1204189553;
signed char var_17 = (signed char)23;
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
