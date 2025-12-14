#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)-118;
unsigned int var_13 = 1898777768U;
signed char var_14 = (signed char)-58;
unsigned int var_16 = 1315709805U;
short var_17 = (short)18646;
int zero = 0;
unsigned char var_18 = (unsigned char)14;
unsigned char var_19 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
