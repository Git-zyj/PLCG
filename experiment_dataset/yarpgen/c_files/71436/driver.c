#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2069062739U;
_Bool var_1 = (_Bool)0;
unsigned long long int var_5 = 8134858214284775184ULL;
_Bool var_6 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_15 = (short)-18612;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
