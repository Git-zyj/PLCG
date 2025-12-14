#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5661719763795879979LL;
unsigned char var_11 = (unsigned char)204;
unsigned long long int var_13 = 17656611130666755433ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)98;
unsigned int var_15 = 2192798156U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
