#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24388;
short var_2 = (short)-13481;
int var_5 = -1577956696;
unsigned short var_6 = (unsigned short)39477;
unsigned int var_7 = 3846928970U;
long long int var_8 = -8952750184349500631LL;
unsigned int var_9 = 1490920799U;
unsigned long long int var_13 = 4640475392142702735ULL;
long long int var_15 = 6854869885221505807LL;
unsigned int var_16 = 170217559U;
int zero = 0;
unsigned short var_17 = (unsigned short)13484;
unsigned int var_18 = 1765168522U;
int var_19 = 2095033482;
unsigned char var_20 = (unsigned char)75;
void init() {
}

void checksum() {
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
