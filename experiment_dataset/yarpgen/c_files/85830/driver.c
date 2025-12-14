#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -323519958;
long long int var_6 = -8590209481365039383LL;
unsigned int var_7 = 2922575600U;
int var_9 = 338272477;
unsigned int var_12 = 1214782647U;
int zero = 0;
unsigned char var_14 = (unsigned char)86;
unsigned int var_15 = 3348183598U;
unsigned int var_16 = 1044658315U;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 8830256718062211772ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
