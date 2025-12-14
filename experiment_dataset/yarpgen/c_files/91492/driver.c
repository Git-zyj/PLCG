#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)22767;
unsigned char var_5 = (unsigned char)184;
unsigned char var_6 = (unsigned char)125;
unsigned char var_7 = (unsigned char)107;
unsigned int var_10 = 3674332343U;
unsigned char var_12 = (unsigned char)29;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)22;
short var_18 = (short)-32699;
unsigned int var_19 = 2320916439U;
unsigned long long int var_20 = 4408407567156094526ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
