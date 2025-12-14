#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2082710486;
long long int var_5 = 622688620716136116LL;
unsigned int var_7 = 3496838907U;
unsigned int var_9 = 1074308083U;
unsigned int var_10 = 3159587933U;
signed char var_13 = (signed char)33;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)50;
signed char var_18 = (signed char)93;
unsigned long long int var_19 = 6909038852125694773ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
