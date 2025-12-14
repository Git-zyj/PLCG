#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)215;
long long int var_5 = -4105147405892249106LL;
unsigned char var_6 = (unsigned char)248;
unsigned char var_8 = (unsigned char)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_20 = 1038640790;
long long int var_21 = -2319879968350862636LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
