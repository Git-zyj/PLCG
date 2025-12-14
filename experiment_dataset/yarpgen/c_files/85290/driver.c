#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11908446756188740531ULL;
unsigned short var_6 = (unsigned short)33455;
unsigned short var_7 = (unsigned short)53584;
unsigned short var_9 = (unsigned short)4981;
unsigned short var_11 = (unsigned short)27147;
unsigned short var_12 = (unsigned short)45989;
unsigned char var_14 = (unsigned char)94;
int zero = 0;
short var_15 = (short)-9383;
int var_16 = 745299242;
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
