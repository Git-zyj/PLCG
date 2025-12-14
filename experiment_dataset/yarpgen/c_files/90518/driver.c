#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1486910353U;
unsigned int var_4 = 998666524U;
signed char var_5 = (signed char)-23;
short var_11 = (short)-5682;
int zero = 0;
unsigned short var_13 = (unsigned short)2442;
long long int var_14 = 8633510372442973916LL;
unsigned int var_15 = 2469168497U;
void init() {
}

void checksum() {
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
