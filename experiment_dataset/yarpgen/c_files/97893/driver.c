#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-3506;
short var_7 = (short)12267;
_Bool var_9 = (_Bool)1;
unsigned long long int var_15 = 12281290459347433881ULL;
short var_16 = (short)-4535;
signed char var_17 = (signed char)-34;
int zero = 0;
long long int var_18 = 380553632630697441LL;
long long int var_19 = -2402159468951785389LL;
short var_20 = (short)-31857;
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
