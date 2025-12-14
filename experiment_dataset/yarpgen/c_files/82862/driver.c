#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8200166754395662750LL;
long long int var_3 = 7607110517188865573LL;
unsigned short var_8 = (unsigned short)55241;
unsigned int var_10 = 1662220422U;
unsigned long long int var_14 = 2500177967906121132ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)15478;
int var_17 = 469804019;
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
