#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1040910478;
unsigned int var_6 = 1313547529U;
unsigned char var_10 = (unsigned char)70;
unsigned char var_13 = (unsigned char)122;
int var_15 = -1298499297;
int var_17 = 2118613565;
int zero = 0;
long long int var_19 = 3692915987200178838LL;
unsigned int var_20 = 3758515805U;
long long int var_21 = -7503582074865597080LL;
short var_22 = (short)-9384;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
