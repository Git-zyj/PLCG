#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)20665;
unsigned long long int var_4 = 17308271850235725054ULL;
unsigned long long int var_10 = 18397030858760181499ULL;
long long int var_13 = -1779889099890095788LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)28328;
void init() {
}

void checksum() {
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
