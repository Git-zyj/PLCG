#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3160840857U;
long long int var_3 = 1787626300277787561LL;
long long int var_6 = -6804423768212461130LL;
long long int var_8 = -9149347409747861579LL;
int var_9 = -326552811;
long long int var_12 = -5865292522271039846LL;
int zero = 0;
unsigned int var_15 = 4183809921U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
