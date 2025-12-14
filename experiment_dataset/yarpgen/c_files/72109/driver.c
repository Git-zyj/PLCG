#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)29;
unsigned char var_5 = (unsigned char)71;
unsigned long long int var_10 = 8632550131543772695ULL;
unsigned int var_13 = 2081216742U;
unsigned int var_14 = 3668730620U;
int zero = 0;
unsigned int var_16 = 652092871U;
unsigned char var_17 = (unsigned char)115;
unsigned char var_18 = (unsigned char)122;
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
