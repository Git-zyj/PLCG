#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25211;
unsigned int var_4 = 202072285U;
signed char var_6 = (signed char)5;
long long int var_7 = -5941384153835368307LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 6953500484328920642ULL;
short var_13 = (short)-4249;
unsigned int var_14 = 309023019U;
_Bool var_15 = (_Bool)1;
int var_16 = -1255790029;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 2350246929268081555LL;
short var_19 = (short)28504;
signed char var_20 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
