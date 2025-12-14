#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 123794885U;
int zero = 0;
unsigned long long int var_13 = 13854365980574497987ULL;
unsigned short var_14 = (unsigned short)33628;
unsigned int var_15 = 3104217805U;
unsigned long long int var_16 = 7200247095344466299ULL;
void init() {
}

void checksum() {
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
