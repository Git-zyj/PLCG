#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_6 = -208018892;
signed char var_11 = (signed char)60;
unsigned short var_15 = (unsigned short)7748;
int zero = 0;
unsigned int var_16 = 3181062026U;
long long int var_17 = -7850981904407925312LL;
short var_18 = (short)-27678;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
