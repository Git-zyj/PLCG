#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2099329284;
int var_3 = 1996237934;
unsigned char var_6 = (unsigned char)15;
short var_7 = (short)-13797;
short var_11 = (short)-16195;
int var_12 = 1099375720;
int zero = 0;
unsigned char var_16 = (unsigned char)64;
unsigned char var_17 = (unsigned char)112;
_Bool var_18 = (_Bool)0;
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
