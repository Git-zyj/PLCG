#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1254491665U;
_Bool var_8 = (_Bool)0;
signed char var_12 = (signed char)84;
int zero = 0;
int var_13 = 208879063;
_Bool var_14 = (_Bool)1;
long long int var_15 = 1048693285787992662LL;
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
