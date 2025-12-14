#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52467;
unsigned short var_7 = (unsigned short)12199;
unsigned long long int var_13 = 9238604554130645812ULL;
short var_14 = (short)3440;
int zero = 0;
unsigned long long int var_15 = 12926793615417156922ULL;
unsigned long long int var_16 = 1852269285230826287ULL;
unsigned short var_17 = (unsigned short)38980;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
