#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -404845223;
signed char var_1 = (signed char)-67;
unsigned int var_5 = 241048652U;
long long int var_6 = -4421341656152479053LL;
unsigned int var_7 = 2039092380U;
unsigned char var_8 = (unsigned char)185;
unsigned long long int var_9 = 6507954802719767543ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)12;
short var_11 = (short)-19275;
short var_12 = (short)1314;
short var_13 = (short)-30989;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
