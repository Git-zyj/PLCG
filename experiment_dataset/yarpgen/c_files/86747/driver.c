#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)76;
short var_12 = (short)29718;
unsigned long long int var_14 = 10679231579651729152ULL;
int zero = 0;
unsigned long long int var_17 = 3644244931051165945ULL;
signed char var_18 = (signed char)55;
unsigned char var_19 = (unsigned char)229;
unsigned char var_20 = (unsigned char)231;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
