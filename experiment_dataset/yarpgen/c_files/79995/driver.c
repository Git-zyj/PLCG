#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1439674262U;
signed char var_4 = (signed char)48;
long long int var_5 = 9082415128656559623LL;
int var_6 = 1794098145;
int zero = 0;
unsigned int var_11 = 2063939515U;
long long int var_12 = 6743832539607182792LL;
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
