#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_4 = (short)17332;
long long int var_6 = -8935902987257364671LL;
long long int var_10 = -4163322740226669684LL;
int var_14 = 1792653480;
int zero = 0;
signed char var_15 = (signed char)125;
short var_16 = (short)31120;
long long int var_17 = -3120792667470737161LL;
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
