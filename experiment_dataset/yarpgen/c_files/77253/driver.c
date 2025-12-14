#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7450813013591421400ULL;
unsigned int var_2 = 1897520165U;
short var_3 = (short)23006;
unsigned short var_5 = (unsigned short)29355;
long long int var_7 = -857337648791747459LL;
int var_8 = 556464302;
int zero = 0;
short var_12 = (short)28555;
unsigned short var_13 = (unsigned short)24245;
unsigned int var_14 = 2662198894U;
signed char var_15 = (signed char)-37;
signed char var_16 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
