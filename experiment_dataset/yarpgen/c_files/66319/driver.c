#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1647567664343262866ULL;
short var_2 = (short)31542;
long long int var_4 = -3277580574708092970LL;
signed char var_7 = (signed char)-93;
unsigned int var_13 = 3150164776U;
int zero = 0;
unsigned long long int var_16 = 9667240888554504255ULL;
int var_17 = 577414214;
_Bool var_18 = (_Bool)1;
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
