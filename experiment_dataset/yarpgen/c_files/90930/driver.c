#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56710;
short var_3 = (short)28350;
int var_8 = -718991969;
int var_9 = 125010028;
unsigned long long int var_12 = 12198909497858843040ULL;
int zero = 0;
unsigned int var_13 = 322363808U;
unsigned short var_14 = (unsigned short)5368;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)28783;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
