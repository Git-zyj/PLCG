#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-94;
int var_6 = -112422285;
unsigned char var_11 = (unsigned char)255;
unsigned int var_13 = 1901234466U;
unsigned short var_14 = (unsigned short)35788;
int zero = 0;
int var_19 = -54333018;
unsigned long long int var_20 = 6548900369573556316ULL;
void init() {
}

void checksum() {
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
