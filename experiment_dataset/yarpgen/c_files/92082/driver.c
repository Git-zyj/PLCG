#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1769663124U;
unsigned int var_3 = 1773242085U;
unsigned char var_5 = (unsigned char)229;
signed char var_9 = (signed char)42;
signed char var_12 = (signed char)-46;
unsigned int var_13 = 4206278156U;
int zero = 0;
short var_16 = (short)20071;
signed char var_17 = (signed char)96;
short var_18 = (short)4731;
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
