#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-19;
unsigned short var_2 = (unsigned short)5433;
unsigned short var_4 = (unsigned short)48459;
unsigned short var_10 = (unsigned short)58386;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)19914;
unsigned short var_13 = (unsigned short)928;
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
