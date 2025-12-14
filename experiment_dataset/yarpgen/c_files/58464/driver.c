#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 7764626765136353LL;
unsigned short var_13 = (unsigned short)53083;
signed char var_14 = (signed char)54;
unsigned int var_16 = 2523263985U;
int zero = 0;
unsigned short var_19 = (unsigned short)34475;
unsigned short var_20 = (unsigned short)17609;
long long int var_21 = -3216095588244953332LL;
int var_22 = 2086938965;
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
