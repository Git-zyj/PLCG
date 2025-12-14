#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
short var_14 = (short)-26675;
long long int var_15 = 2596056000828282808LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)250;
unsigned long long int var_19 = 2069097117014769898ULL;
unsigned char var_20 = (unsigned char)33;
long long int var_21 = 2009111575079828382LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
