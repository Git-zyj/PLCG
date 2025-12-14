#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)173;
unsigned long long int var_7 = 17980399825715561593ULL;
unsigned char var_10 = (unsigned char)56;
int var_12 = 1278895372;
signed char var_15 = (signed char)94;
int zero = 0;
unsigned short var_19 = (unsigned short)7477;
unsigned short var_20 = (unsigned short)19945;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
