#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1330852958;
unsigned char var_2 = (unsigned char)121;
_Bool var_4 = (_Bool)0;
long long int var_7 = -2677976487370328639LL;
short var_8 = (short)-21718;
unsigned long long int var_14 = 98159126500537491ULL;
int zero = 0;
long long int var_15 = 5415937544615513207LL;
unsigned short var_16 = (unsigned short)45792;
short var_17 = (short)2007;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
