#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16628;
signed char var_1 = (signed char)107;
unsigned int var_4 = 2257193175U;
unsigned long long int var_6 = 4051033151818152193ULL;
unsigned char var_7 = (unsigned char)75;
int var_11 = 533569659;
int zero = 0;
int var_14 = -1907935054;
unsigned char var_15 = (unsigned char)30;
short var_16 = (short)-3964;
unsigned char var_17 = (unsigned char)66;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
