#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13749;
unsigned short var_2 = (unsigned short)12857;
unsigned char var_3 = (unsigned char)147;
int var_5 = -787635925;
short var_6 = (short)10743;
unsigned char var_8 = (unsigned char)115;
unsigned char var_11 = (unsigned char)95;
unsigned long long int var_12 = 2457571691987433138ULL;
int zero = 0;
short var_13 = (short)-11902;
signed char var_14 = (signed char)-92;
short var_15 = (short)-22218;
short var_16 = (short)-6057;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
