#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)87;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)(-127 - 1);
unsigned short var_6 = (unsigned short)902;
unsigned long long int var_7 = 17252983254892994053ULL;
unsigned long long int var_12 = 599308573478917248ULL;
int zero = 0;
unsigned long long int var_15 = 6171695563787713247ULL;
long long int var_16 = -4062807726211312656LL;
int var_17 = -988690428;
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
