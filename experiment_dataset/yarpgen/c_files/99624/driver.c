#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5935395834673321089ULL;
unsigned long long int var_3 = 18018586964852517803ULL;
long long int var_6 = 2784907650830112951LL;
int var_7 = 1772491189;
int zero = 0;
long long int var_11 = -4651889611236782515LL;
unsigned char var_12 = (unsigned char)114;
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
