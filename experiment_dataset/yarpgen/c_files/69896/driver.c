#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11200;
int var_3 = -2134418030;
unsigned char var_6 = (unsigned char)101;
long long int var_8 = -1442418164890818625LL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)30516;
long long int var_12 = 7997815680650992855LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_14 = 855620977;
unsigned char var_15 = (unsigned char)173;
unsigned char var_16 = (unsigned char)77;
void init() {
}

void checksum() {
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
