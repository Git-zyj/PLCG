#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1325862473U;
long long int var_7 = 1197160879384215429LL;
signed char var_10 = (signed char)-81;
signed char var_12 = (signed char)-32;
unsigned int var_13 = 1871365763U;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 690482365512045720ULL;
unsigned char var_18 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
