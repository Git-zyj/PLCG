#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 17551588586892837873ULL;
long long int var_10 = -2441248803188132887LL;
unsigned long long int var_12 = 7190657710849833928ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 8921167758325525958ULL;
unsigned long long int var_21 = 10810942508158786346ULL;
unsigned long long int var_22 = 10519971962343202515ULL;
void init() {
}

void checksum() {
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
