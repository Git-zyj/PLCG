#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_6 = -2086816021557872089LL;
unsigned long long int var_11 = 4514196928039758558ULL;
int var_14 = 8727472;
unsigned short var_15 = (unsigned short)5529;
long long int var_18 = 3542296517028111835LL;
int zero = 0;
unsigned short var_19 = (unsigned short)63681;
short var_20 = (short)6902;
unsigned long long int var_21 = 500029458748484827ULL;
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
