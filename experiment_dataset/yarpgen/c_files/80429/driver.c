#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)2363;
unsigned short var_10 = (unsigned short)43837;
unsigned short var_14 = (unsigned short)56735;
int zero = 0;
long long int var_17 = -6817257077164890694LL;
short var_18 = (short)-20471;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
