#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7791766011369442419ULL;
_Bool var_12 = (_Bool)0;
signed char var_16 = (signed char)107;
int zero = 0;
unsigned char var_20 = (unsigned char)171;
unsigned long long int var_21 = 11122759322452986927ULL;
unsigned char var_22 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
