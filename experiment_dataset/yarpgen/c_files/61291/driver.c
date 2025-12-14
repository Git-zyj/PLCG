#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1404465730;
unsigned long long int var_3 = 9025604972009921488ULL;
int var_6 = -207312991;
short var_8 = (short)-29639;
short var_14 = (short)7675;
int zero = 0;
unsigned long long int var_16 = 8894191338545583732ULL;
long long int var_17 = 702876427160690487LL;
void init() {
}

void checksum() {
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
