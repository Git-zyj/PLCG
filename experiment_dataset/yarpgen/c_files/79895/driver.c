#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_9 = 6258589581053483973ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)57805;
long long int var_11 = 3069993595400760552LL;
unsigned int var_12 = 503623932U;
unsigned short var_13 = (unsigned short)25039;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
