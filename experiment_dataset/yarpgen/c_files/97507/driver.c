#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_3 = 455608641U;
unsigned char var_17 = (unsigned char)203;
signed char var_19 = (signed char)-95;
int zero = 0;
short var_20 = (short)14532;
unsigned int var_21 = 3655596417U;
unsigned long long int var_22 = 13846141576274605516ULL;
unsigned char var_23 = (unsigned char)49;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
