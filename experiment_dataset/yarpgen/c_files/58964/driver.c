#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9651;
_Bool var_2 = (_Bool)1;
long long int var_5 = 3490413220343179656LL;
int var_8 = -1273648212;
int zero = 0;
signed char var_12 = (signed char)-119;
int var_13 = -1606226853;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
