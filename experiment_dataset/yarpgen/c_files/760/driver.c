#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8665;
unsigned int var_2 = 1289547110U;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 1303808578U;
unsigned short var_8 = (unsigned short)65041;
unsigned int var_11 = 2384200077U;
signed char var_15 = (signed char)61;
unsigned long long int var_17 = 2449077603526118124ULL;
int zero = 0;
unsigned int var_18 = 4024822987U;
unsigned long long int var_19 = 804787428371522973ULL;
void init() {
}

void checksum() {
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
