#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_6 = (unsigned char)189;
unsigned int var_9 = 2496935857U;
int var_10 = 1992756482;
unsigned char var_11 = (unsigned char)84;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)155;
int zero = 0;
signed char var_15 = (signed char)(-127 - 1);
unsigned int var_16 = 3909074651U;
unsigned char var_17 = (unsigned char)245;
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
