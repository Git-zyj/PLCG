#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)31;
unsigned long long int var_1 = 1677828441898117680ULL;
unsigned int var_3 = 3338602941U;
signed char var_4 = (signed char)-32;
signed char var_5 = (signed char)-101;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 3937877591U;
int zero = 0;
unsigned long long int var_11 = 1230747587238708219ULL;
unsigned long long int var_12 = 2724443319340025432ULL;
unsigned int var_13 = 1787882200U;
unsigned long long int var_14 = 1366860556892013754ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
