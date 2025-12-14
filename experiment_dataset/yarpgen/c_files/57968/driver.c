#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-64;
unsigned long long int var_1 = 2300419921038876490ULL;
unsigned long long int var_3 = 7581522031516182465ULL;
unsigned int var_4 = 4030510108U;
short var_5 = (short)-6067;
short var_7 = (short)30832;
int var_8 = 562685814;
long long int var_9 = 1463076685884455773LL;
long long int var_10 = -7111123267979630370LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = 1650863046;
short var_13 = (short)28553;
short var_14 = (short)24753;
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
