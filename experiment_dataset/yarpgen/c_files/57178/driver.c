#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22341;
_Bool var_12 = (_Bool)1;
int var_13 = -1740362535;
int zero = 0;
signed char var_16 = (signed char)-13;
short var_17 = (short)9985;
long long int var_18 = 6139228242657496331LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
