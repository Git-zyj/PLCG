#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9142406889589913735ULL;
unsigned short var_2 = (unsigned short)3183;
signed char var_3 = (signed char)-65;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 13927426114030401922ULL;
int zero = 0;
unsigned int var_13 = 1499781681U;
signed char var_14 = (signed char)-83;
unsigned int var_15 = 1651040915U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
