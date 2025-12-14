#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -101044211;
int var_3 = -179697027;
unsigned long long int var_12 = 5062834918522661332ULL;
unsigned long long int var_15 = 8694493300489023457ULL;
int zero = 0;
long long int var_20 = -5792494499663265120LL;
unsigned int var_21 = 3086597597U;
unsigned char var_22 = (unsigned char)142;
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
