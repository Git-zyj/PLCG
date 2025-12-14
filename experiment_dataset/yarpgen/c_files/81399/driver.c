#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)-12369;
short var_4 = (short)-10100;
short var_5 = (short)-21989;
unsigned short var_6 = (unsigned short)33183;
unsigned char var_9 = (unsigned char)42;
unsigned int var_10 = 3087939158U;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)34;
long long int var_13 = 1754510202339278LL;
short var_14 = (short)-15280;
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
