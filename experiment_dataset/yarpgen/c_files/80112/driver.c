#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14562;
short var_3 = (short)-31953;
unsigned char var_5 = (unsigned char)76;
short var_6 = (short)-12873;
unsigned char var_7 = (unsigned char)76;
unsigned short var_8 = (unsigned short)27818;
short var_10 = (short)13188;
int zero = 0;
short var_13 = (short)-749;
unsigned char var_14 = (unsigned char)200;
short var_15 = (short)10456;
unsigned short var_16 = (unsigned short)31602;
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
