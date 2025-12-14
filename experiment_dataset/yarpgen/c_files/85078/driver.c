#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)97;
int zero = 0;
unsigned short var_13 = (unsigned short)19940;
unsigned short var_14 = (unsigned short)13065;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1089791021U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
