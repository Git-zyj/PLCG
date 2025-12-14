#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10804;
short var_3 = (short)-10652;
unsigned short var_4 = (unsigned short)29000;
long long int var_10 = 6594554421335042156LL;
short var_11 = (short)5350;
unsigned int var_12 = 1944797756U;
unsigned int var_14 = 1372864880U;
short var_15 = (short)-3327;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)6230;
unsigned long long int var_19 = 9169883609874517227ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
