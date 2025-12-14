#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
int var_2 = -374157983;
unsigned char var_4 = (unsigned char)15;
unsigned short var_5 = (unsigned short)46531;
unsigned char var_9 = (unsigned char)187;
short var_10 = (short)-3516;
unsigned short var_11 = (unsigned short)57667;
int zero = 0;
short var_12 = (short)-13617;
unsigned char var_13 = (unsigned char)182;
short var_14 = (short)404;
unsigned char var_15 = (unsigned char)97;
unsigned short var_16 = (unsigned short)36579;
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
