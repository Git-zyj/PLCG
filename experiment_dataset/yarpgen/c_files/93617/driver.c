#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28066;
unsigned int var_3 = 3142904375U;
unsigned int var_8 = 2507048237U;
int zero = 0;
unsigned int var_10 = 2271778719U;
_Bool var_11 = (_Bool)1;
int var_12 = -972422894;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
