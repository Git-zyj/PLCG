#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4111603977U;
unsigned long long int var_3 = 6295456238392500120ULL;
unsigned char var_8 = (unsigned char)80;
signed char var_10 = (signed char)25;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 11607728798476014171ULL;
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
