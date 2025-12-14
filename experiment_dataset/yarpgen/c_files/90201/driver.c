#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -887648861255882728LL;
signed char var_5 = (signed char)123;
unsigned long long int var_11 = 4779177862499418830ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_13 = -8531167346867161046LL;
signed char var_14 = (signed char)79;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
