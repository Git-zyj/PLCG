#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-327;
long long int var_4 = -5214599745353908461LL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 13196362828108962369ULL;
short var_13 = (short)-17610;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
