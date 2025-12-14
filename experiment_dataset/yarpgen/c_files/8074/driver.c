#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3310930072U;
long long int var_5 = -6528132639854349801LL;
unsigned short var_8 = (unsigned short)64303;
short var_16 = (short)-19172;
int zero = 0;
short var_20 = (short)13557;
int var_21 = -2036425846;
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
