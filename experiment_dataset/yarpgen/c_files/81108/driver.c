#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = -1001238705;
_Bool var_4 = (_Bool)0;
unsigned int var_13 = 2405694864U;
unsigned long long int var_14 = 673280945912329064ULL;
short var_15 = (short)-2796;
long long int var_16 = 6437902388299524119LL;
signed char var_17 = (signed char)95;
unsigned long long int var_18 = 8409003671001484106ULL;
int zero = 0;
signed char var_19 = (signed char)-36;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3274536739U;
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
