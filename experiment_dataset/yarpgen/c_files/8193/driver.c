#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
long long int var_7 = 1384183766041486841LL;
unsigned short var_8 = (unsigned short)65033;
short var_12 = (short)23302;
int zero = 0;
long long int var_15 = 658022609061724213LL;
unsigned char var_16 = (unsigned char)29;
unsigned short var_17 = (unsigned short)3123;
unsigned char var_18 = (unsigned char)94;
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
