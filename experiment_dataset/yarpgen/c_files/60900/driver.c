#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1900524384;
unsigned int var_2 = 2488253821U;
long long int var_3 = 1621494439679911626LL;
short var_4 = (short)-19962;
int zero = 0;
signed char var_10 = (signed char)108;
short var_11 = (short)15260;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
