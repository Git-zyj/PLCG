#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2763564176U;
unsigned int var_7 = 1734593883U;
signed char var_8 = (signed char)95;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)-64;
unsigned int var_11 = 3491410261U;
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
