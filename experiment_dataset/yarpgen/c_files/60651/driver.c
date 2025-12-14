#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4061927597709992546LL;
short var_8 = (short)-5802;
int zero = 0;
unsigned int var_10 = 2882438944U;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)55597;
short var_13 = (short)23832;
unsigned int var_14 = 3246139081U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
