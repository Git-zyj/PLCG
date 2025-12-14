#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
short var_1 = (short)-5485;
short var_2 = (short)2239;
unsigned char var_3 = (unsigned char)27;
long long int var_4 = -4164734414275323006LL;
unsigned char var_5 = (unsigned char)93;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-22318;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-58;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)74;
unsigned short var_13 = (unsigned short)49764;
long long int var_14 = -5090713474063139914LL;
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
