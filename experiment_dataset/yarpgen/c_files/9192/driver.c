#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 452271957;
short var_1 = (short)-12257;
unsigned char var_3 = (unsigned char)24;
short var_4 = (short)-15866;
unsigned int var_5 = 4208594593U;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)47681;
unsigned long long int var_8 = 566180253748027229ULL;
long long int var_9 = -789098310341640879LL;
int var_10 = -2128719550;
int zero = 0;
unsigned char var_11 = (unsigned char)86;
long long int var_12 = -9167953849446211367LL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
