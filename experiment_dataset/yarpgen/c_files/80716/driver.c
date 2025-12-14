#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28302;
signed char var_5 = (signed char)33;
int var_10 = 815110522;
long long int var_15 = -3195857177376481545LL;
int zero = 0;
int var_16 = -284754418;
long long int var_17 = -8669932286993518807LL;
void init() {
}

void checksum() {
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
