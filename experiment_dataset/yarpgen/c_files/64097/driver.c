#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)11;
short var_3 = (short)-24608;
unsigned char var_5 = (unsigned char)186;
unsigned long long int var_6 = 11911813408642151436ULL;
unsigned int var_10 = 536986262U;
unsigned int var_11 = 3595369168U;
int zero = 0;
unsigned int var_13 = 2343531057U;
unsigned int var_14 = 3291390276U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
