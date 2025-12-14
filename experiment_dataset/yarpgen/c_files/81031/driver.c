#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11428019142658237924ULL;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1055185386U;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-25400;
signed char var_16 = (signed char)9;
short var_17 = (short)18447;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
