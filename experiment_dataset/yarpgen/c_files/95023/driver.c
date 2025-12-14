#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8571143936222409213ULL;
int var_6 = -954637376;
unsigned int var_12 = 2499380639U;
int zero = 0;
unsigned int var_14 = 1589376861U;
unsigned int var_15 = 1367653696U;
long long int var_16 = 6269001572202756444LL;
void init() {
}

void checksum() {
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
