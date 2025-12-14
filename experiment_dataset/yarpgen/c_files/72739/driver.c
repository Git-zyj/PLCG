#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)11;
short var_3 = (short)21294;
unsigned short var_5 = (unsigned short)36202;
unsigned long long int var_7 = 2050497021695975466ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)1013;
unsigned int var_15 = 7182922U;
signed char var_16 = (signed char)66;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
