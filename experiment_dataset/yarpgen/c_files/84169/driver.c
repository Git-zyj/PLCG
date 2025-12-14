#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12298;
unsigned short var_4 = (unsigned short)30157;
int var_6 = -214320786;
short var_8 = (short)-9930;
unsigned char var_9 = (unsigned char)45;
unsigned short var_10 = (unsigned short)33200;
unsigned short var_13 = (unsigned short)19132;
long long int var_14 = 7386826278427601841LL;
int zero = 0;
long long int var_16 = -6350031380479527531LL;
unsigned short var_17 = (unsigned short)35523;
void init() {
}

void checksum() {
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
