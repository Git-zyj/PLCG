#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20158;
unsigned char var_5 = (unsigned char)59;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_12 = (short)13513;
unsigned int var_13 = 2357813682U;
signed char var_14 = (signed char)-96;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
