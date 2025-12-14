#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1662428330;
unsigned int var_3 = 3509365942U;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 1539691043U;
long long int var_13 = 7189937765087744988LL;
unsigned char var_15 = (unsigned char)32;
int zero = 0;
unsigned int var_18 = 2840212853U;
unsigned int var_19 = 2434269940U;
long long int var_20 = 3242724829757488996LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
