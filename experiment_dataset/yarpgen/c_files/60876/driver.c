#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1703255183;
unsigned int var_3 = 1542951471U;
long long int var_6 = 3256323190150818344LL;
long long int var_7 = -6798475327982763204LL;
short var_10 = (short)-30732;
long long int var_11 = 8344903274777014555LL;
short var_14 = (short)-10602;
int zero = 0;
unsigned int var_17 = 1279877548U;
int var_18 = -1953564736;
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
