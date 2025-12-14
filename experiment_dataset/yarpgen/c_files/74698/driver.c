#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1797628371U;
unsigned short var_6 = (unsigned short)402;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)30281;
unsigned short var_17 = (unsigned short)21262;
unsigned short var_18 = (unsigned short)59420;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
