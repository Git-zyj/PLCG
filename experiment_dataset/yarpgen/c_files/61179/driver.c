#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22333;
unsigned char var_3 = (unsigned char)129;
short var_5 = (short)-19579;
unsigned char var_6 = (unsigned char)11;
unsigned short var_10 = (unsigned short)23688;
int zero = 0;
int var_11 = 439530882;
unsigned short var_12 = (unsigned short)40917;
long long int var_13 = 384805522765187798LL;
int var_14 = 686597866;
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
