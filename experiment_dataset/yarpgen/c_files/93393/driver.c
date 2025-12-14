#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
short var_8 = (short)-17553;
unsigned int var_9 = 4038862632U;
_Bool var_10 = (_Bool)0;
short var_11 = (short)21717;
int zero = 0;
unsigned char var_12 = (unsigned char)107;
signed char var_13 = (signed char)7;
unsigned char var_14 = (unsigned char)17;
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
