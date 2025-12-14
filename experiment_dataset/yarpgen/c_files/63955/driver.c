#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3997123972246151718ULL;
int var_13 = -446173567;
int zero = 0;
unsigned short var_20 = (unsigned short)53533;
unsigned int var_21 = 2021739346U;
unsigned long long int var_22 = 17532142494165312812ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
