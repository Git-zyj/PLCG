#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_10 = 1804352918U;
unsigned long long int var_15 = 10853902263350280610ULL;
unsigned char var_16 = (unsigned char)38;
unsigned char var_17 = (unsigned char)107;
int zero = 0;
unsigned char var_19 = (unsigned char)156;
unsigned long long int var_20 = 17558711346717640972ULL;
void init() {
}

void checksum() {
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
