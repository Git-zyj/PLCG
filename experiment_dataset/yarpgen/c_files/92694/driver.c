#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)61881;
unsigned short var_3 = (unsigned short)47307;
unsigned long long int var_6 = 6815538362561467833ULL;
int var_7 = 1790950359;
long long int var_9 = -2813428098388315803LL;
int zero = 0;
unsigned char var_12 = (unsigned char)200;
unsigned int var_13 = 788084931U;
_Bool var_14 = (_Bool)0;
long long int var_15 = -3755379154175218409LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
