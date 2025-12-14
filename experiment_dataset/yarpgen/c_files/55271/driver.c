#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2255508112U;
short var_2 = (short)-15332;
unsigned int var_10 = 3207385984U;
long long int var_11 = -5887674586312919270LL;
int var_12 = 1535377135;
long long int var_13 = 927216402349051975LL;
int zero = 0;
unsigned int var_16 = 851981259U;
int var_17 = 1368414179;
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
