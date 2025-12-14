#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3053980265963828512LL;
unsigned int var_6 = 2525662024U;
long long int var_8 = -7174676201120766620LL;
int zero = 0;
long long int var_10 = 6275738695865606105LL;
short var_11 = (short)-16807;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
