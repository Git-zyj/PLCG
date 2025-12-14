#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)24;
unsigned int var_5 = 231343257U;
unsigned short var_7 = (unsigned short)43255;
unsigned long long int var_12 = 16606228246744834133ULL;
int zero = 0;
signed char var_13 = (signed char)73;
signed char var_14 = (signed char)-7;
void init() {
}

void checksum() {
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
