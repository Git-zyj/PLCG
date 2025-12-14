#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-24311;
short var_6 = (short)-7198;
unsigned char var_8 = (unsigned char)145;
int var_10 = -163054748;
unsigned char var_11 = (unsigned char)116;
short var_13 = (short)-7736;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)21970;
unsigned short var_17 = (unsigned short)38477;
long long int var_18 = 5259776661720708155LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
