#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 604259885U;
unsigned short var_4 = (unsigned short)14482;
signed char var_5 = (signed char)-113;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-30;
signed char var_9 = (signed char)21;
long long int var_11 = 7125878737759699301LL;
signed char var_12 = (signed char)-61;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)6629;
unsigned int var_15 = 657081691U;
unsigned int var_16 = 2212704551U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
