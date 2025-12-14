#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23394;
short var_12 = (short)8357;
unsigned long long int var_15 = 7132933707702249066ULL;
int zero = 0;
unsigned long long int var_16 = 15396292063572092583ULL;
unsigned int var_17 = 3241410885U;
int var_18 = 1659895143;
void init() {
}

void checksum() {
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
