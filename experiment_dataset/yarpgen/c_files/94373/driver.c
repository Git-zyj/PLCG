#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
unsigned long long int var_3 = 11424288396329091466ULL;
short var_4 = (short)20853;
unsigned char var_5 = (unsigned char)14;
unsigned char var_7 = (unsigned char)249;
unsigned char var_9 = (unsigned char)165;
int zero = 0;
short var_11 = (short)-13389;
long long int var_12 = 8783939444012287796LL;
unsigned short var_13 = (unsigned short)26841;
int var_14 = 2052412255;
unsigned int var_15 = 683720658U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
