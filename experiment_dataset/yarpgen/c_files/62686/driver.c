#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2489649199108258578LL;
int var_2 = 165206477;
unsigned char var_4 = (unsigned char)194;
long long int var_5 = 7616893710958608636LL;
int var_7 = -63911512;
long long int var_10 = 4785183747016099787LL;
long long int var_11 = -4388545175434409124LL;
int zero = 0;
unsigned short var_14 = (unsigned short)61346;
unsigned short var_15 = (unsigned short)63912;
unsigned char var_16 = (unsigned char)205;
short var_17 = (short)-29193;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
