#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)64449;
unsigned int var_6 = 2524078402U;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)21524;
int zero = 0;
int var_14 = 12397938;
short var_15 = (short)-13114;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
