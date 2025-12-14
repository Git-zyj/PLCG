#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
long long int var_12 = 1314647911396327700LL;
unsigned long long int var_15 = 49230815226616346ULL;
signed char var_17 = (signed char)95;
int zero = 0;
signed char var_19 = (signed char)-13;
int var_20 = 1920932132;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
