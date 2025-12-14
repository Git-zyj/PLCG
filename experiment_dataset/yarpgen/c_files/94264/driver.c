#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 915667914308483120ULL;
unsigned long long int var_5 = 10475075614906280462ULL;
unsigned long long int var_6 = 10292147404237155592ULL;
unsigned short var_7 = (unsigned short)18898;
long long int var_10 = -3702958048737252701LL;
short var_11 = (short)-30526;
signed char var_12 = (signed char)125;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-23;
unsigned int var_16 = 1165336862U;
void init() {
}

void checksum() {
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
