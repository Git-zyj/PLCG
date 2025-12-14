#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1681499881;
int var_2 = 1754751112;
int var_8 = 453910132;
int var_16 = 1752443087;
int var_17 = -28695673;
int zero = 0;
int var_18 = -527634654;
int var_19 = 564560678;
int var_20 = -780840255;
int var_21 = -1457523824;
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
