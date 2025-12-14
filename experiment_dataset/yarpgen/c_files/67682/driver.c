#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-9073;
unsigned long long int var_13 = 17567325023743972059ULL;
unsigned long long int var_14 = 9581864004842674096ULL;
int zero = 0;
unsigned long long int var_15 = 10236561381557705934ULL;
unsigned long long int var_16 = 5989001494871351690ULL;
void init() {
}

void checksum() {
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
