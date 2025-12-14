#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1183163913;
unsigned int var_8 = 3821210076U;
short var_9 = (short)-28172;
int var_10 = 1831256840;
int var_11 = 182994239;
int zero = 0;
int var_12 = -545996930;
long long int var_13 = 2641988112862936126LL;
unsigned long long int var_14 = 6308790456250493159ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
