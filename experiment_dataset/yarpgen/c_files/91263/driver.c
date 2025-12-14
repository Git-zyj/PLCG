#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)215;
unsigned char var_11 = (unsigned char)218;
unsigned long long int var_12 = 9563557247665610447ULL;
unsigned int var_13 = 120863703U;
signed char var_14 = (signed char)104;
int zero = 0;
unsigned long long int var_16 = 9715345550631161988ULL;
unsigned char var_17 = (unsigned char)97;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
