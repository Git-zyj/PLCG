#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-23506;
unsigned int var_14 = 4101027541U;
long long int var_16 = 3555263902783712633LL;
int zero = 0;
short var_20 = (short)-337;
short var_21 = (short)21318;
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
