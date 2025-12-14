#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1164356898;
unsigned long long int var_5 = 6000376326011609270ULL;
unsigned int var_11 = 4220542040U;
int var_13 = 1988110211;
unsigned long long int var_18 = 2216880886509280192ULL;
int zero = 0;
int var_19 = -1021019503;
unsigned char var_20 = (unsigned char)24;
long long int var_21 = 923746812599780807LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
