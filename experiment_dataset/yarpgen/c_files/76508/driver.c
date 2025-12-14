#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5869851830560737873LL;
short var_5 = (short)14797;
signed char var_8 = (signed char)5;
unsigned long long int var_9 = 16318213345108593055ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -999861838;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
