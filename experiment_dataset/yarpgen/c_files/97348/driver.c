#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)100;
unsigned int var_2 = 574939419U;
short var_3 = (short)29958;
unsigned int var_12 = 911951294U;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)103;
unsigned short var_16 = (unsigned short)45390;
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
