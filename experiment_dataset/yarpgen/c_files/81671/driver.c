#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)201;
unsigned char var_2 = (unsigned char)5;
unsigned long long int var_4 = 13474804755897559204ULL;
unsigned long long int var_8 = 15493430901115304694ULL;
int zero = 0;
int var_15 = 867442186;
long long int var_16 = 6145534763151932155LL;
void init() {
}

void checksum() {
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
