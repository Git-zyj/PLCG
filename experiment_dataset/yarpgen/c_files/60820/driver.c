#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)14449;
int var_8 = -1400942984;
unsigned short var_11 = (unsigned short)63470;
unsigned int var_13 = 1825573030U;
int zero = 0;
signed char var_18 = (signed char)-106;
long long int var_19 = 4156902649520927314LL;
void init() {
}

void checksum() {
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
