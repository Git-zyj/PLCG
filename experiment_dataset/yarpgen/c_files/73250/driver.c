#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 171570886U;
_Bool var_13 = (_Bool)1;
short var_15 = (short)3832;
int var_17 = -745044179;
int zero = 0;
unsigned int var_20 = 1961471814U;
short var_21 = (short)-16072;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
