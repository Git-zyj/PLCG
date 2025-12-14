#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)15747;
long long int var_7 = 6787137420891217053LL;
unsigned short var_8 = (unsigned short)36223;
short var_14 = (short)17383;
int zero = 0;
long long int var_20 = -2812218495248994235LL;
long long int var_21 = 4785810337758965639LL;
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
