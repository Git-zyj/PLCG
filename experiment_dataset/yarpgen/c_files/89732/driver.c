#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)5;
unsigned short var_2 = (unsigned short)24525;
signed char var_4 = (signed char)111;
int var_11 = -394942974;
int var_13 = 1003552067;
int zero = 0;
short var_15 = (short)-12504;
unsigned long long int var_16 = 5932625154503230045ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
