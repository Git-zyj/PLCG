#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2488053114U;
unsigned int var_2 = 1075048893U;
unsigned int var_4 = 43899005U;
unsigned int var_5 = 2982470330U;
unsigned int var_7 = 2906508093U;
long long int var_8 = 7340312248564499929LL;
unsigned int var_10 = 249361625U;
int zero = 0;
unsigned int var_11 = 1902354235U;
unsigned int var_12 = 108142160U;
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
