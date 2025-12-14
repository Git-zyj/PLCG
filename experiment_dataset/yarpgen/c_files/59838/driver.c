#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_5 = 142776364U;
signed char var_6 = (signed char)-13;
short var_7 = (short)17184;
int zero = 0;
unsigned long long int var_16 = 10579948640813116176ULL;
unsigned int var_17 = 1438813344U;
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
