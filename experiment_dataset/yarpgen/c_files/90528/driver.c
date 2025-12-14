#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)243;
unsigned int var_3 = 2554168015U;
unsigned int var_4 = 3018771100U;
unsigned char var_6 = (unsigned char)16;
unsigned long long int var_7 = 4479832449489362189ULL;
unsigned int var_9 = 3889206424U;
int zero = 0;
short var_13 = (short)-30029;
short var_14 = (short)-27892;
long long int var_15 = 2628672101188472227LL;
long long int var_16 = -5907395397354359570LL;
short var_17 = (short)-31619;
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
