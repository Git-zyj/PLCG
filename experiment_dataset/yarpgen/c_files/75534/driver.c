#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1519004194U;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)45;
signed char var_10 = (signed char)15;
signed char var_12 = (signed char)-80;
short var_17 = (short)30244;
int zero = 0;
short var_19 = (short)12058;
long long int var_20 = 202213672003498273LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
