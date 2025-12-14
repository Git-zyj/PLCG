#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)108;
short var_4 = (short)-7552;
unsigned int var_5 = 2287933545U;
unsigned short var_8 = (unsigned short)6991;
unsigned short var_10 = (unsigned short)60952;
int zero = 0;
int var_11 = 196406164;
short var_12 = (short)5434;
int var_13 = 6989636;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
