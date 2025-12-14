#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)187;
unsigned long long int var_3 = 6336456739106164547ULL;
unsigned char var_5 = (unsigned char)233;
short var_6 = (short)5215;
long long int var_7 = -6575581288045239994LL;
short var_11 = (short)-24033;
unsigned long long int var_12 = 17091539113937200910ULL;
unsigned char var_13 = (unsigned char)251;
int zero = 0;
unsigned short var_14 = (unsigned short)7441;
short var_15 = (short)-28299;
short var_16 = (short)10780;
unsigned short var_17 = (unsigned short)64445;
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
