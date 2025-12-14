#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22750;
unsigned short var_4 = (unsigned short)46056;
long long int var_10 = -6130567421983469835LL;
unsigned long long int var_11 = 9735054752582240304ULL;
unsigned long long int var_13 = 5098794424961278748ULL;
long long int var_15 = 2997771313086928869LL;
int zero = 0;
short var_16 = (short)26869;
short var_17 = (short)-22835;
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
