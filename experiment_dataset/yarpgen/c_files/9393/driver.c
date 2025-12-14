#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1213852229;
unsigned int var_6 = 2857921784U;
unsigned long long int var_7 = 8869024598233640397ULL;
unsigned int var_11 = 2551921995U;
int zero = 0;
int var_12 = -1597747765;
short var_13 = (short)-20695;
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
