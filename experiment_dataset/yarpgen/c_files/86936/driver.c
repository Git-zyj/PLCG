#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10361463234028477909ULL;
long long int var_7 = 4683154432494423501LL;
unsigned long long int var_11 = 1310580805212213899ULL;
short var_12 = (short)24224;
int zero = 0;
unsigned long long int var_13 = 8936263429317311817ULL;
short var_14 = (short)-23036;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
