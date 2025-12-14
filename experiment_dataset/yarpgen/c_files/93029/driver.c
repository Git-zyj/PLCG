#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)122;
long long int var_3 = -6213554745619507054LL;
signed char var_4 = (signed char)113;
unsigned int var_5 = 2871611172U;
unsigned int var_10 = 1131926076U;
int var_11 = -2094722425;
unsigned int var_12 = 3211391781U;
int zero = 0;
long long int var_13 = -7421490267644728068LL;
unsigned int var_14 = 294832102U;
unsigned int var_15 = 426627929U;
unsigned int var_16 = 775252078U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
