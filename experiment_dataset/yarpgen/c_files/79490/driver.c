#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15589284473779885750ULL;
_Bool var_3 = (_Bool)0;
int var_7 = -1871927934;
unsigned int var_8 = 2553756847U;
signed char var_11 = (signed char)83;
short var_14 = (short)32376;
int zero = 0;
signed char var_16 = (signed char)-113;
unsigned int var_17 = 2552214978U;
void init() {
}

void checksum() {
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
