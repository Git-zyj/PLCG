#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)53607;
short var_5 = (short)23400;
int var_6 = 262931642;
short var_8 = (short)19706;
int zero = 0;
unsigned long long int var_10 = 2335423383287922918ULL;
int var_11 = 255985623;
long long int var_12 = 8466583240717492704LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
