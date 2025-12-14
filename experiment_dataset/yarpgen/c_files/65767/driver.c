#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3592645794U;
unsigned long long int var_2 = 13003140742776396061ULL;
unsigned char var_4 = (unsigned char)55;
long long int var_6 = -8724823156737543217LL;
unsigned int var_7 = 1749403915U;
long long int var_9 = 5433356532874361659LL;
int zero = 0;
unsigned char var_10 = (unsigned char)94;
unsigned int var_11 = 774794441U;
short var_12 = (short)20499;
unsigned int var_13 = 645000517U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
