#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -88998243;
unsigned long long int var_7 = 4648224153507176541ULL;
signed char var_14 = (signed char)99;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-32309;
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
