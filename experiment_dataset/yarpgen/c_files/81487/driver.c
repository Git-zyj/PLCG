#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1818292478U;
long long int var_7 = -4012779377059687212LL;
unsigned short var_9 = (unsigned short)64008;
short var_10 = (short)4188;
int zero = 0;
unsigned long long int var_12 = 9259318275271192633ULL;
signed char var_13 = (signed char)40;
long long int var_14 = -263421426906299028LL;
int var_15 = -1831184095;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
