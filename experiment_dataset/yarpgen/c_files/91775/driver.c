#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1696;
signed char var_2 = (signed char)-16;
short var_5 = (short)27651;
unsigned int var_6 = 1814723824U;
unsigned int var_7 = 1272974404U;
unsigned short var_11 = (unsigned short)3107;
unsigned char var_15 = (unsigned char)38;
int zero = 0;
unsigned long long int var_16 = 14819886340122337442ULL;
unsigned short var_17 = (unsigned short)6119;
unsigned short var_18 = (unsigned short)16624;
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
