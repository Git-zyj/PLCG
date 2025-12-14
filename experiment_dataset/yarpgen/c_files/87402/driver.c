#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-30279;
signed char var_5 = (signed char)-18;
int zero = 0;
unsigned int var_20 = 2220723046U;
unsigned int var_21 = 2682442778U;
short var_22 = (short)23250;
long long int var_23 = -1651813616781151510LL;
unsigned short var_24 = (unsigned short)9791;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
