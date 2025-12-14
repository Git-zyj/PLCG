#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2131390420;
int var_4 = 1840331362;
unsigned long long int var_6 = 8315985242608796504ULL;
short var_11 = (short)15247;
short var_12 = (short)-18428;
int zero = 0;
short var_14 = (short)2837;
short var_15 = (short)-4127;
short var_16 = (short)28542;
unsigned int var_17 = 4293964321U;
unsigned char var_18 = (unsigned char)156;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
