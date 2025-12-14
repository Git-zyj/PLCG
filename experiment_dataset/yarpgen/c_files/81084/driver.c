#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1172925975;
long long int var_6 = 4400801085960519421LL;
long long int var_10 = -2799382407714257901LL;
int zero = 0;
unsigned long long int var_15 = 16541507285002065312ULL;
long long int var_16 = 1729443785670572311LL;
int var_17 = -1319777255;
void init() {
}

void checksum() {
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
