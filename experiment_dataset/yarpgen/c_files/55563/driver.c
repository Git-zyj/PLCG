#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5112963090975184570LL;
long long int var_6 = -2552317229307012046LL;
int zero = 0;
unsigned long long int var_19 = 14366056804043845503ULL;
_Bool var_20 = (_Bool)0;
long long int var_21 = -5195440291366016327LL;
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
