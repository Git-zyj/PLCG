#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)9081;
unsigned int var_2 = 1416920182U;
unsigned int var_3 = 3732466236U;
int var_7 = -604905073;
long long int var_9 = 5428225039513716320LL;
int var_12 = 1878090366;
int var_15 = 423159078;
int zero = 0;
unsigned short var_17 = (unsigned short)148;
int var_18 = 2008208338;
unsigned int var_19 = 1330822810U;
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
