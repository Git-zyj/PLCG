#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1762235841U;
int var_1 = -1783820353;
unsigned int var_2 = 1130711540U;
unsigned long long int var_3 = 13542355409814096251ULL;
int var_6 = 1520776789;
unsigned int var_7 = 929497834U;
unsigned long long int var_9 = 5832544682373291194ULL;
unsigned int var_13 = 4075777593U;
int zero = 0;
unsigned int var_14 = 1057549249U;
unsigned int var_15 = 588980059U;
unsigned long long int var_16 = 6380874396860604736ULL;
void init() {
}

void checksum() {
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
