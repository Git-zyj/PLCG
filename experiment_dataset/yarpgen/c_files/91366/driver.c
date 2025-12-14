#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1314903113U;
short var_1 = (short)11708;
short var_2 = (short)-13125;
long long int var_5 = -4248278543365851925LL;
short var_10 = (short)-21615;
long long int var_16 = -680244244758804339LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 3942785981U;
long long int var_21 = -1237663831523509916LL;
signed char var_22 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
