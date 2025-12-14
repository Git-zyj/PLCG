#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)16052;
signed char var_9 = (signed char)49;
unsigned long long int var_14 = 8039790712307203895ULL;
int zero = 0;
long long int var_16 = -4333654465171362421LL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1704202846U;
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
