#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
unsigned char var_4 = (unsigned char)131;
unsigned short var_10 = (unsigned short)8158;
long long int var_11 = 2943665844137820470LL;
unsigned short var_12 = (unsigned short)63694;
int zero = 0;
long long int var_14 = 4417965273474844499LL;
unsigned short var_15 = (unsigned short)62836;
long long int var_16 = 4581232073770655100LL;
void init() {
}

void checksum() {
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
