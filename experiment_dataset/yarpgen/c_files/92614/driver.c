#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1949727991;
short var_2 = (short)1319;
unsigned long long int var_3 = 4825786619048929585ULL;
unsigned int var_5 = 1316953865U;
short var_10 = (short)-32519;
int zero = 0;
unsigned long long int var_11 = 5865269897400118957ULL;
long long int var_12 = 5864103607750003260LL;
short var_13 = (short)-24953;
long long int var_14 = -6441595938864311719LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
