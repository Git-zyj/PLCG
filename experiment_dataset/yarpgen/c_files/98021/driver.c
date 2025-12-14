#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1854758387;
long long int var_5 = 6493805553133147589LL;
unsigned int var_6 = 2801097130U;
signed char var_11 = (signed char)80;
int zero = 0;
unsigned short var_12 = (unsigned short)51562;
signed char var_13 = (signed char)-100;
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
