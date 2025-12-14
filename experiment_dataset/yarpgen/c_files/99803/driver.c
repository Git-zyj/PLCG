#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2552751766U;
unsigned long long int var_3 = 10080010308669884921ULL;
unsigned short var_4 = (unsigned short)18300;
unsigned char var_5 = (unsigned char)178;
int var_6 = 352101271;
signed char var_7 = (signed char)-115;
unsigned short var_8 = (unsigned short)31919;
int zero = 0;
unsigned int var_12 = 2565787192U;
unsigned short var_13 = (unsigned short)3073;
unsigned int var_14 = 2589254468U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
