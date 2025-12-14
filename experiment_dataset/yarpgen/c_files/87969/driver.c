#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)165;
unsigned long long int var_4 = 17664879970604436941ULL;
unsigned char var_7 = (unsigned char)184;
int var_9 = 1286537363;
int zero = 0;
int var_11 = 317852007;
unsigned char var_12 = (unsigned char)16;
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
