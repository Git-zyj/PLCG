#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8214;
short var_5 = (short)-20831;
short var_11 = (short)19846;
long long int var_13 = 4030199602583029110LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 8703943220086550036LL;
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
