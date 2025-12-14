#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 621164478U;
short var_5 = (short)28430;
unsigned long long int var_9 = 11203050538420727651ULL;
int zero = 0;
int var_12 = -613937629;
short var_13 = (short)-17946;
signed char var_14 = (signed char)107;
unsigned char var_15 = (unsigned char)249;
unsigned long long int var_16 = 6693661544649402656ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
