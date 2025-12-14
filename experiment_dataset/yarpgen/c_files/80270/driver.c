#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1197059039;
short var_2 = (short)-30048;
signed char var_5 = (signed char)11;
long long int var_12 = -549906032736403617LL;
int zero = 0;
unsigned int var_17 = 1859359598U;
signed char var_18 = (signed char)94;
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
