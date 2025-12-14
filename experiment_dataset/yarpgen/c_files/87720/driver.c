#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18077;
unsigned long long int var_10 = 6644612655483747620ULL;
short var_11 = (short)-16747;
short var_13 = (short)-10555;
unsigned int var_14 = 2289563176U;
short var_16 = (short)24456;
int zero = 0;
unsigned int var_17 = 4144884471U;
short var_18 = (short)-27859;
unsigned int var_19 = 3724917462U;
unsigned long long int var_20 = 5178082238784506580ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
