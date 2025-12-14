#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-3275;
unsigned int var_10 = 1588852059U;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 2806732701U;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1203743468U;
short var_16 = (short)-14589;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
