#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_3 = (signed char)36;
int var_7 = 547973967;
unsigned int var_9 = 1030027510U;
int var_12 = -1320823635;
unsigned long long int var_13 = 9790268502363337651ULL;
int zero = 0;
short var_15 = (short)-9855;
unsigned int var_16 = 2924756883U;
unsigned int var_17 = 2070741768U;
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
