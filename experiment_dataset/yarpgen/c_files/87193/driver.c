#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_5 = (short)-24006;
unsigned short var_6 = (unsigned short)46715;
_Bool var_14 = (_Bool)0;
unsigned char var_17 = (unsigned char)99;
int zero = 0;
short var_18 = (short)-16663;
unsigned int var_19 = 3655046337U;
unsigned short var_20 = (unsigned short)37913;
unsigned int var_21 = 2713836004U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
