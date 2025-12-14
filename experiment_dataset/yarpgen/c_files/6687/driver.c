#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
unsigned int var_3 = 3674395235U;
signed char var_6 = (signed char)116;
unsigned int var_7 = 1314214701U;
int zero = 0;
unsigned char var_10 = (unsigned char)166;
int var_11 = -348865818;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
