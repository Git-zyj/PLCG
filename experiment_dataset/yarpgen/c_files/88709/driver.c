#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -686824412;
unsigned long long int var_2 = 12796226846599836866ULL;
unsigned int var_4 = 2291013562U;
signed char var_6 = (signed char)24;
int var_8 = 1247493817;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)88;
int var_12 = -710358482;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
