#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned int var_11 = 359616840U;
unsigned long long int var_14 = 2342644013133250767ULL;
int zero = 0;
long long int var_17 = 3586971810989452572LL;
long long int var_18 = -4697329743766942876LL;
unsigned int var_19 = 162963167U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
