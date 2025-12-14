#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12798980999669536500ULL;
long long int var_6 = -6324942902256231419LL;
unsigned int var_7 = 3039558931U;
int zero = 0;
unsigned int var_11 = 2880503254U;
short var_12 = (short)19550;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
