#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = -857863044;
int var_7 = 1409601714;
signed char var_9 = (signed char)-90;
signed char var_10 = (signed char)-113;
int zero = 0;
unsigned int var_11 = 3231080470U;
unsigned long long int var_12 = 7456038255238138312ULL;
_Bool var_13 = (_Bool)1;
int var_14 = -1874629210;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
