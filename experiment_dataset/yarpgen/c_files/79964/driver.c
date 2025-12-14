#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1120497368;
signed char var_4 = (signed char)-28;
unsigned int var_6 = 1045333183U;
unsigned int var_8 = 3716686244U;
signed char var_11 = (signed char)-42;
int zero = 0;
long long int var_12 = -7246698110097121825LL;
unsigned int var_13 = 1793247130U;
void init() {
}

void checksum() {
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
