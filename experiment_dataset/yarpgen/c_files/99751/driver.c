#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14121;
short var_1 = (short)24915;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)67;
short var_5 = (short)18818;
int var_7 = -956199234;
unsigned short var_8 = (unsigned short)24404;
short var_9 = (short)-18935;
short var_10 = (short)30419;
unsigned short var_11 = (unsigned short)49692;
int var_12 = 787318946;
int var_13 = -876741238;
int var_14 = 1955698053;
int zero = 0;
unsigned char var_15 = (unsigned char)208;
short var_16 = (short)-14697;
_Bool var_17 = (_Bool)0;
int var_18 = 1174395270;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
