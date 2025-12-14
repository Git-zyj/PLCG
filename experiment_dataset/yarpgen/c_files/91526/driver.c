#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14248;
unsigned short var_11 = (unsigned short)8815;
unsigned short var_13 = (unsigned short)11921;
int var_17 = 2062428033;
int zero = 0;
int var_20 = 1733272437;
unsigned char var_21 = (unsigned char)143;
unsigned int var_22 = 1225021449U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
