#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-23737;
long long int var_7 = 6636992930539924164LL;
unsigned char var_8 = (unsigned char)122;
int zero = 0;
unsigned long long int var_11 = 9658152008558017799ULL;
long long int var_12 = -708701974140402341LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
