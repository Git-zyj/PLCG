#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2049943109457228003LL;
long long int var_10 = 2881475152794122448LL;
unsigned short var_13 = (unsigned short)62765;
unsigned short var_16 = (unsigned short)55150;
int zero = 0;
unsigned char var_19 = (unsigned char)198;
unsigned short var_20 = (unsigned short)24801;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
