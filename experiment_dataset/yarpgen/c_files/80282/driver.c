#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)86;
signed char var_3 = (signed char)92;
int var_4 = 1146664535;
int var_5 = 1618623519;
int var_8 = 569929603;
signed char var_9 = (signed char)-81;
int var_11 = -308961408;
int var_14 = 1670085179;
int zero = 0;
signed char var_15 = (signed char)36;
signed char var_16 = (signed char)80;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
