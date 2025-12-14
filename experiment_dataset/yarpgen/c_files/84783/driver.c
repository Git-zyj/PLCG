#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1887277951;
unsigned long long int var_3 = 5639590945037127495ULL;
unsigned short var_8 = (unsigned short)17506;
int zero = 0;
int var_16 = -466348705;
unsigned char var_17 = (unsigned char)148;
void init() {
}

void checksum() {
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
