#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_14 = 2211029233U;
_Bool var_16 = (_Bool)1;
unsigned int var_18 = 975367830U;
long long int var_19 = -3298531950255121425LL;
int zero = 0;
unsigned char var_20 = (unsigned char)165;
_Bool var_21 = (_Bool)0;
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
