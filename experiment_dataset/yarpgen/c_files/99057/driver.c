#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 414914413576628902ULL;
long long int var_1 = 2056427679431280979LL;
unsigned long long int var_2 = 16688323185090847130ULL;
int var_3 = -1812972746;
_Bool var_4 = (_Bool)1;
short var_5 = (short)18264;
signed char var_6 = (signed char)-35;
short var_7 = (short)-19181;
_Bool var_10 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-76;
long long int var_15 = -1465159453750548279LL;
signed char var_16 = (signed char)-105;
_Bool var_17 = (_Bool)0;
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
