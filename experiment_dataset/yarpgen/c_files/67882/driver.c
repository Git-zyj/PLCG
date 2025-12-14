#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9220598657019998963LL;
unsigned short var_2 = (unsigned short)3241;
unsigned char var_4 = (unsigned char)83;
unsigned int var_7 = 249564379U;
unsigned int var_8 = 2482525998U;
unsigned short var_11 = (unsigned short)63276;
int zero = 0;
short var_12 = (short)11333;
short var_13 = (short)-2670;
unsigned short var_14 = (unsigned short)30331;
long long int var_15 = 3680581413320124679LL;
short var_16 = (short)-16704;
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
