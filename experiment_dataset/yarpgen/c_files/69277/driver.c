#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1685871310;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-124;
int zero = 0;
unsigned long long int var_16 = 2795252144802268055ULL;
unsigned short var_17 = (unsigned short)26696;
void init() {
}

void checksum() {
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
