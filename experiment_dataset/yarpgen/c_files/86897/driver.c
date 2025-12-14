#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-425;
_Bool var_6 = (_Bool)1;
int var_7 = -328737346;
unsigned int var_9 = 2829177527U;
unsigned long long int var_10 = 3616817002953703994ULL;
int zero = 0;
signed char var_13 = (signed char)-46;
short var_14 = (short)13115;
short var_15 = (short)-17916;
short var_16 = (short)5159;
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
