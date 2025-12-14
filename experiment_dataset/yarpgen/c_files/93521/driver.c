#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2018623988;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 614638538U;
int zero = 0;
unsigned long long int var_10 = 9510302877697314294ULL;
short var_11 = (short)-20520;
unsigned int var_12 = 2238782679U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
