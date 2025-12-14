#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2476321371005081215LL;
unsigned int var_7 = 2145569718U;
unsigned int var_9 = 1918779117U;
_Bool var_11 = (_Bool)0;
short var_12 = (short)32028;
int var_13 = 1296677243;
int zero = 0;
int var_16 = 2119291238;
int var_17 = -790721090;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)305;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
