#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)107;
short var_5 = (short)923;
unsigned int var_6 = 1213069292U;
unsigned char var_10 = (unsigned char)100;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 9327018465341156021ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
