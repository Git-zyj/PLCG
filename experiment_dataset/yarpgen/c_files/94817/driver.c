#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3555116181U;
signed char var_14 = (signed char)23;
unsigned short var_16 = (unsigned short)23821;
int var_18 = -1777363736;
int zero = 0;
int var_19 = -992791045;
signed char var_20 = (signed char)127;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 7399196778031114224ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
