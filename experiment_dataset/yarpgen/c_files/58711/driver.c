#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2923749526U;
long long int var_2 = -7105914522612673800LL;
unsigned int var_3 = 788848246U;
unsigned int var_6 = 3000507518U;
unsigned long long int var_9 = 7237016692860318144ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 162472688U;
long long int var_15 = -8261467619850389765LL;
int var_16 = -807313359;
long long int var_17 = 5460438972527745769LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
