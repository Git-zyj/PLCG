#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-36;
signed char var_4 = (signed char)-35;
signed char var_5 = (signed char)29;
signed char var_8 = (signed char)119;
short var_9 = (short)-18326;
int var_13 = -1550590823;
int zero = 0;
signed char var_15 = (signed char)123;
unsigned long long int var_16 = 2950240370517238986ULL;
unsigned short var_17 = (unsigned short)48731;
unsigned int var_18 = 2509010589U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
