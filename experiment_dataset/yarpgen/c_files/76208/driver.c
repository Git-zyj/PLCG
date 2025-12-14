#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8152342044370559714ULL;
_Bool var_1 = (_Bool)1;
int var_6 = -455600747;
long long int var_12 = -6694415609145907078LL;
int zero = 0;
int var_13 = -2077542537;
short var_14 = (short)25729;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
