#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5618545978111058299ULL;
long long int var_5 = 1590519641058078180LL;
int var_15 = 574683418;
short var_16 = (short)-6654;
int zero = 0;
long long int var_17 = -2671497120309958543LL;
long long int var_18 = 7703423276716677530LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
