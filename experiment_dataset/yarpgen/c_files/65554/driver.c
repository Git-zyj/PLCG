#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-3673;
unsigned int var_7 = 2199952430U;
unsigned int var_9 = 3531425380U;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_18 = -624646922;
short var_19 = (short)-9963;
long long int var_20 = -3790283915336230530LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
