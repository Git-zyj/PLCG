#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-14659;
unsigned long long int var_8 = 15488248634276574453ULL;
short var_10 = (short)-193;
int zero = 0;
unsigned long long int var_15 = 1916518035375364918ULL;
unsigned long long int var_16 = 13080037670085723259ULL;
unsigned short var_17 = (unsigned short)65378;
unsigned long long int var_18 = 16008782687238744260ULL;
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
