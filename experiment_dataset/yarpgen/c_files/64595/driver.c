#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20305;
int var_3 = 557888211;
unsigned short var_6 = (unsigned short)59695;
unsigned char var_8 = (unsigned char)71;
short var_14 = (short)7643;
int zero = 0;
unsigned long long int var_15 = 4700707238608686749ULL;
int var_16 = -1741011985;
unsigned short var_17 = (unsigned short)31295;
void init() {
}

void checksum() {
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
