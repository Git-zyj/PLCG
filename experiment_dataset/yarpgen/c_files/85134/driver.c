#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3134218551489571636LL;
unsigned int var_1 = 617555950U;
int var_3 = -1666383184;
unsigned char var_5 = (unsigned char)203;
long long int var_6 = 6585784863976187400LL;
int var_11 = -386838;
int zero = 0;
short var_14 = (short)13718;
long long int var_15 = -3857803713559294946LL;
unsigned char var_16 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
