#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1480312629;
short var_6 = (short)2089;
short var_7 = (short)-1700;
short var_8 = (short)-13891;
signed char var_11 = (signed char)-95;
long long int var_12 = -333568248351348701LL;
unsigned char var_14 = (unsigned char)95;
int zero = 0;
unsigned short var_16 = (unsigned short)25163;
long long int var_17 = -8449493154008181287LL;
unsigned long long int var_18 = 16620943234199579906ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
