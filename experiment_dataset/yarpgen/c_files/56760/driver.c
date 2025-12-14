#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)21;
_Bool var_6 = (_Bool)0;
signed char var_11 = (signed char)55;
unsigned int var_13 = 3831849686U;
int var_14 = 1272125585;
int var_15 = -869239019;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 880704197U;
unsigned char var_22 = (unsigned char)128;
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
