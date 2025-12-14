#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2096910320;
unsigned char var_4 = (unsigned char)52;
long long int var_10 = 9142550125875356392LL;
unsigned char var_14 = (unsigned char)146;
unsigned short var_15 = (unsigned short)64989;
int zero = 0;
unsigned short var_18 = (unsigned short)7899;
unsigned int var_19 = 2492063059U;
void init() {
}

void checksum() {
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
