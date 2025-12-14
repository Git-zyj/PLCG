#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35490;
unsigned short var_3 = (unsigned short)39094;
unsigned int var_4 = 2815153382U;
unsigned char var_6 = (unsigned char)186;
long long int var_8 = 6031445722121141309LL;
int zero = 0;
unsigned long long int var_10 = 2256757670572712299ULL;
unsigned long long int var_11 = 12109612490124857412ULL;
unsigned short var_12 = (unsigned short)3379;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
