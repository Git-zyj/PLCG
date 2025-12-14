#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 426352384U;
long long int var_10 = -8838160623863182182LL;
short var_12 = (short)29440;
unsigned short var_18 = (unsigned short)16343;
int zero = 0;
long long int var_20 = -4650890631677768905LL;
signed char var_21 = (signed char)80;
void init() {
}

void checksum() {
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
