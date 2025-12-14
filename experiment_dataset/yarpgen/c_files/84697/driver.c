#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)2368;
long long int var_11 = -986830562179689780LL;
unsigned long long int var_12 = 15216958067941263297ULL;
long long int var_13 = 831058962820536460LL;
int var_14 = 669762480;
unsigned short var_16 = (unsigned short)763;
int zero = 0;
short var_20 = (short)-14336;
unsigned char var_21 = (unsigned char)95;
short var_22 = (short)-21856;
unsigned long long int var_23 = 6600662522170166875ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
