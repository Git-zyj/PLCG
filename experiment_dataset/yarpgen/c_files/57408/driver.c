#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)14751;
unsigned int var_16 = 2995814611U;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3522770188U;
short var_21 = (short)20843;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
