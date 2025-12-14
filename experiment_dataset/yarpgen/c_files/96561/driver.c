#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34824;
long long int var_7 = -5545417040870496925LL;
unsigned int var_8 = 3721231123U;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-2552;
unsigned long long int var_16 = 6133612857538351421ULL;
signed char var_17 = (signed char)-47;
void init() {
}

void checksum() {
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
