#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10555915111216484372ULL;
unsigned long long int var_2 = 5615903689827269317ULL;
long long int var_8 = -7708223828382124904LL;
unsigned int var_9 = 1580407890U;
int var_10 = 143848426;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 12943477515125438311ULL;
long long int var_18 = 8712997093008545788LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
