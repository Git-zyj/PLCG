#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55316;
unsigned int var_3 = 3455179732U;
unsigned short var_6 = (unsigned short)52364;
unsigned long long int var_8 = 12106775174055559001ULL;
unsigned short var_10 = (unsigned short)62623;
unsigned short var_11 = (unsigned short)11736;
int zero = 0;
int var_13 = -1988247239;
unsigned short var_14 = (unsigned short)19681;
int var_15 = 690312695;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
