#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)49041;
short var_4 = (short)-22978;
unsigned short var_13 = (unsigned short)63049;
long long int var_15 = 4697235446728907045LL;
short var_16 = (short)-25255;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)16234;
short var_20 = (short)30456;
short var_21 = (short)24247;
unsigned char var_22 = (unsigned char)108;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
