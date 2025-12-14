#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3518048314U;
short var_6 = (short)-21126;
int var_13 = 2007985558;
short var_16 = (short)19155;
int zero = 0;
signed char var_19 = (signed char)-19;
unsigned int var_20 = 3036178446U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
