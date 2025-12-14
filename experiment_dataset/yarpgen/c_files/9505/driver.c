#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_5 = (short)14282;
unsigned int var_16 = 4213553464U;
long long int var_19 = -4965676544517470257LL;
int zero = 0;
unsigned int var_20 = 3378855134U;
_Bool var_21 = (_Bool)1;
long long int var_22 = -5642814197734029798LL;
int var_23 = 1612163398;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
