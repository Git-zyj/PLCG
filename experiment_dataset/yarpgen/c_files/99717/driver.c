#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 4025454751U;
unsigned int var_3 = 302200605U;
unsigned int var_5 = 3709904457U;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 3566167980U;
signed char var_11 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
