#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_4 = (signed char)55;
long long int var_7 = -4505072538151897413LL;
int var_8 = 1496776739;
signed char var_10 = (signed char)-76;
int zero = 0;
unsigned long long int var_14 = 4348882236543702782ULL;
int var_15 = -2061355172;
signed char var_16 = (signed char)-81;
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
