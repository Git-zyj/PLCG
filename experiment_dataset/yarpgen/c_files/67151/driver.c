#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1576563499U;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-14347;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 2521896268U;
unsigned short var_12 = (unsigned short)46320;
long long int var_17 = 7116376135242542090LL;
int zero = 0;
long long int var_18 = 9114685831812480794LL;
unsigned int var_19 = 106612463U;
long long int var_20 = 1768970963458155149LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
