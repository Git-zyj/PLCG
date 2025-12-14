#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 328754641U;
unsigned int var_3 = 2568847204U;
unsigned int var_6 = 1805266853U;
unsigned int var_8 = 3524510398U;
unsigned int var_10 = 1852007536U;
short var_11 = (short)24786;
unsigned int var_12 = 651041790U;
unsigned int var_13 = 4239440033U;
int zero = 0;
signed char var_14 = (signed char)16;
signed char var_15 = (signed char)28;
signed char var_16 = (signed char)-5;
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
