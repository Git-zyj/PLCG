#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6673;
long long int var_5 = -567429911529645552LL;
unsigned long long int var_10 = 16588724357248486348ULL;
signed char var_13 = (signed char)24;
int zero = 0;
long long int var_16 = -6159874678415825814LL;
unsigned short var_17 = (unsigned short)38162;
short var_18 = (short)-32187;
unsigned long long int var_19 = 175461877578295018ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
