#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15541043444543529888ULL;
unsigned long long int var_13 = 3210325250441606887ULL;
long long int var_14 = 8541867400060205487LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 1731577811U;
unsigned int var_19 = 1437487300U;
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
