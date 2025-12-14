#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17217537509547692291ULL;
short var_3 = (short)-17078;
unsigned int var_5 = 1600304480U;
unsigned char var_8 = (unsigned char)156;
int zero = 0;
short var_14 = (short)24669;
unsigned short var_15 = (unsigned short)62102;
short var_16 = (short)31834;
long long int var_17 = -7140919659765758985LL;
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
