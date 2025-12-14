#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)45275;
int var_5 = -559526384;
long long int var_7 = -1136386799568791445LL;
unsigned char var_8 = (unsigned char)128;
long long int var_10 = 2749489130362633155LL;
long long int var_12 = -3748656938653980272LL;
int zero = 0;
long long int var_14 = 7852903950391405370LL;
long long int var_15 = -2837408687027341686LL;
int var_16 = -24126934;
unsigned long long int var_17 = 2880942015753347956ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
