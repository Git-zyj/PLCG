#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -462364544524226889LL;
int var_3 = 1126846312;
unsigned char var_4 = (unsigned char)28;
short var_5 = (short)-30278;
long long int var_8 = 2053055290967538075LL;
unsigned short var_10 = (unsigned short)25905;
unsigned int var_11 = 1904716389U;
int var_12 = 1141710586;
unsigned char var_13 = (unsigned char)255;
int zero = 0;
short var_16 = (short)28934;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
