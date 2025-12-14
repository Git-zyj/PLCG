#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3235000412275817145ULL;
long long int var_5 = -6171405659540853060LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_20 = 5703212744729126680LL;
signed char var_21 = (signed char)-79;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1239723977U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
