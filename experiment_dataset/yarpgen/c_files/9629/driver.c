#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1547524861;
_Bool var_8 = (_Bool)1;
int var_12 = 1381541123;
unsigned int var_17 = 1588673602U;
int zero = 0;
unsigned int var_18 = 2726114222U;
int var_19 = 1344118971;
int var_20 = 2080282413;
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
