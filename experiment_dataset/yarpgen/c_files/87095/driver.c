#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_9 = -147535463;
int var_12 = 1238868333;
unsigned int var_13 = 2997744540U;
int var_15 = -830239225;
signed char var_17 = (signed char)63;
int zero = 0;
short var_18 = (short)16354;
long long int var_19 = 914420200111304047LL;
void init() {
}

void checksum() {
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
