#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)84;
unsigned long long int var_4 = 11331159855672668308ULL;
unsigned long long int var_6 = 6860021453185603946ULL;
unsigned char var_8 = (unsigned char)72;
unsigned long long int var_11 = 10453672496312389173ULL;
unsigned int var_13 = 1640184117U;
unsigned short var_16 = (unsigned short)28119;
short var_19 = (short)14599;
int zero = 0;
unsigned long long int var_20 = 16086962827250766062ULL;
unsigned int var_21 = 3790940186U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
