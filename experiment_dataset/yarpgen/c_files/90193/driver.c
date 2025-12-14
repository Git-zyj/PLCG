#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9963;
short var_5 = (short)-9891;
long long int var_12 = -1031178826166342516LL;
int zero = 0;
unsigned long long int var_13 = 17916971432474903418ULL;
unsigned int var_14 = 2491203488U;
_Bool var_15 = (_Bool)0;
int var_16 = 1798496734;
unsigned int var_17 = 3644991934U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
