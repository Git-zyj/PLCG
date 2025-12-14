#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41400;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2631476181U;
int zero = 0;
unsigned int var_11 = 103628851U;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 912028882U;
unsigned short var_14 = (unsigned short)35338;
int var_15 = -2093228969;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
