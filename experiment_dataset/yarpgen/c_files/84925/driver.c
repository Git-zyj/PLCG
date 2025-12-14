#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)122;
signed char var_12 = (signed char)7;
int var_15 = 795406519;
long long int var_18 = -4550948230762117975LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3865634467U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
