#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_5 = 1343519582U;
_Bool var_8 = (_Bool)1;
signed char var_14 = (signed char)-91;
int zero = 0;
unsigned int var_15 = 2226464630U;
unsigned char var_16 = (unsigned char)172;
unsigned char var_17 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
