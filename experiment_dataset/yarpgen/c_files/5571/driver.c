#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)208;
unsigned short var_3 = (unsigned short)18657;
short var_6 = (short)-12255;
unsigned long long int var_8 = 8834068005071273416ULL;
unsigned short var_10 = (unsigned short)24644;
short var_14 = (short)-22891;
int zero = 0;
unsigned long long int var_16 = 1080631346090094672ULL;
unsigned int var_17 = 914479121U;
unsigned short var_18 = (unsigned short)55558;
unsigned long long int var_19 = 1584195723120554753ULL;
unsigned int var_20 = 2490320456U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
