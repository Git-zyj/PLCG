#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1099;
long long int var_6 = 4674105468885126390LL;
unsigned int var_7 = 962293159U;
unsigned int var_8 = 3783264706U;
unsigned short var_9 = (unsigned short)30427;
int zero = 0;
unsigned short var_12 = (unsigned short)14718;
short var_13 = (short)-4735;
unsigned char var_14 = (unsigned char)46;
unsigned short var_15 = (unsigned short)59663;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
