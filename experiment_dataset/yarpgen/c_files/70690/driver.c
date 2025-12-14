#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)31;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 169809654U;
int zero = 0;
int var_11 = 1075801002;
unsigned int var_12 = 860020277U;
long long int var_13 = 9025310203986406145LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
