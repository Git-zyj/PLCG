#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4076552951361519166LL;
unsigned long long int var_4 = 13332079929703856998ULL;
short var_5 = (short)4074;
unsigned int var_7 = 2745848292U;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2716080564U;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-18474;
signed char var_16 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
