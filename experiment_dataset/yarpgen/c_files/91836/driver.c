#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12204453416627229539ULL;
unsigned char var_6 = (unsigned char)89;
signed char var_7 = (signed char)31;
int zero = 0;
signed char var_11 = (signed char)93;
long long int var_12 = 4386260787005901495LL;
signed char var_13 = (signed char)88;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
