#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)181;
long long int var_4 = -3218546772341546146LL;
unsigned short var_5 = (unsigned short)31965;
short var_12 = (short)-14378;
unsigned int var_13 = 2811359384U;
int zero = 0;
unsigned short var_17 = (unsigned short)52080;
short var_18 = (short)31607;
void init() {
}

void checksum() {
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
