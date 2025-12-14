#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1747661565;
int var_1 = -658381099;
int var_2 = -1997174742;
int var_3 = 809134459;
int var_11 = 1177281962;
int zero = 0;
int var_13 = -22814687;
int var_14 = 737751973;
int var_15 = -1756018278;
int var_16 = -291410607;
void init() {
}

void checksum() {
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
