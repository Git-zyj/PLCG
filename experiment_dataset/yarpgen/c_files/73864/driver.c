#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3143566902U;
long long int var_3 = 3393308055281880602LL;
unsigned short var_7 = (unsigned short)34447;
int zero = 0;
unsigned int var_16 = 2660989536U;
signed char var_17 = (signed char)18;
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
