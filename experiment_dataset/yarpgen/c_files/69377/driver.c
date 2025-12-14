#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
int var_7 = -814329689;
short var_10 = (short)18717;
long long int var_11 = 6169887864320688415LL;
unsigned long long int var_12 = 12749221117312061758ULL;
int zero = 0;
short var_14 = (short)-22764;
short var_15 = (short)-13596;
void init() {
}

void checksum() {
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
