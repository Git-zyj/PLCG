#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)55;
signed char var_8 = (signed char)-55;
unsigned int var_9 = 382219720U;
int var_12 = 1016833197;
int zero = 0;
unsigned short var_15 = (unsigned short)55330;
signed char var_16 = (signed char)21;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
