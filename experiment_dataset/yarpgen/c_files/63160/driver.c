#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11282882878766659491ULL;
unsigned long long int var_4 = 13657872307724820127ULL;
long long int var_6 = -7767926908080785312LL;
int var_15 = -1704037191;
int zero = 0;
unsigned short var_16 = (unsigned short)44028;
short var_17 = (short)13580;
unsigned int var_18 = 3752039002U;
short var_19 = (short)-31023;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
