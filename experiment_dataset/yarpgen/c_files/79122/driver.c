#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1782850978U;
long long int var_10 = 1749626412309589063LL;
unsigned char var_18 = (unsigned char)22;
int zero = 0;
unsigned short var_19 = (unsigned short)16113;
unsigned short var_20 = (unsigned short)55406;
int var_21 = 766224879;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
