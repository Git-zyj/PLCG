#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -425915297;
int var_4 = -1368650500;
unsigned int var_10 = 1456279510U;
unsigned int var_13 = 4086396312U;
short var_16 = (short)-31180;
int zero = 0;
long long int var_18 = 6882809754809700530LL;
long long int var_19 = 5830587649212672581LL;
long long int var_20 = 1290990380292583070LL;
int var_21 = -1432744796;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
