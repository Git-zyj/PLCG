#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8875548893829320198LL;
unsigned char var_11 = (unsigned char)93;
int zero = 0;
short var_20 = (short)-17326;
signed char var_21 = (signed char)51;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 6005901506671118316ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
