#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2736682194312134216ULL;
unsigned int var_3 = 1978932427U;
unsigned int var_5 = 360598611U;
unsigned long long int var_8 = 15767879714198097727ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_13 = 1930116135;
unsigned int var_14 = 906077506U;
unsigned long long int var_15 = 391535888737428165ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
