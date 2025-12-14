#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-13515;
unsigned long long int var_8 = 2711082030981441919ULL;
int var_14 = 1395076393;
short var_15 = (short)-8434;
int zero = 0;
short var_19 = (short)-13288;
unsigned int var_20 = 3212088593U;
unsigned int var_21 = 3529735021U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
