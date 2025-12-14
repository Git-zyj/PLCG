#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -438859742;
int var_2 = -32399184;
unsigned long long int var_3 = 16853488950174323132ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_11 = 155235810U;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -1178038753;
void init() {
}

void checksum() {
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
