#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1555358790;
short var_15 = (short)15768;
signed char var_17 = (signed char)48;
int zero = 0;
signed char var_20 = (signed char)6;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2529908464U;
long long int var_23 = 4985784757024926400LL;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
