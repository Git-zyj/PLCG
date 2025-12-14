#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6722563435224162788LL;
unsigned int var_6 = 3115785544U;
unsigned long long int var_10 = 6077587942506024470ULL;
unsigned int var_13 = 1149764104U;
short var_14 = (short)30594;
int zero = 0;
unsigned long long int var_15 = 6733568326545161949ULL;
unsigned char var_16 = (unsigned char)48;
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
