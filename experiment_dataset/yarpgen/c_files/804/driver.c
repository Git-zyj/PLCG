#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28215;
int var_3 = -1912691464;
unsigned short var_4 = (unsigned short)22233;
unsigned int var_5 = 2229418402U;
unsigned char var_6 = (unsigned char)68;
short var_7 = (short)-23789;
unsigned short var_11 = (unsigned short)3573;
int var_13 = 1631076309;
int var_14 = 767007530;
int zero = 0;
unsigned int var_15 = 3162117337U;
short var_16 = (short)-28507;
short var_17 = (short)-6759;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
