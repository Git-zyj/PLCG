#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)30482;
int var_10 = -238259388;
unsigned long long int var_11 = 11330682316519205068ULL;
short var_15 = (short)-18861;
int zero = 0;
unsigned long long int var_16 = 2437475165210832034ULL;
int var_17 = 1942828364;
int var_18 = -515062918;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
