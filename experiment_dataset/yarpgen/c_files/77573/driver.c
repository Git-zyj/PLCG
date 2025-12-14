#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1091824888;
int var_7 = -1927959878;
unsigned int var_8 = 2854866669U;
short var_11 = (short)8389;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)48;
_Bool var_17 = (_Bool)1;
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
