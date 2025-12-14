#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)45066;
short var_3 = (short)-6446;
unsigned long long int var_5 = 9746362164918338858ULL;
signed char var_8 = (signed char)4;
unsigned char var_10 = (unsigned char)24;
int zero = 0;
signed char var_11 = (signed char)97;
long long int var_12 = -7199499985936953690LL;
void init() {
}

void checksum() {
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
