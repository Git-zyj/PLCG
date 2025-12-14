#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)128;
unsigned long long int var_6 = 11891644778901359710ULL;
unsigned char var_7 = (unsigned char)126;
long long int var_8 = 5988472318981602479LL;
unsigned int var_9 = 15114970U;
unsigned char var_13 = (unsigned char)87;
long long int var_14 = -5382583942526765797LL;
unsigned char var_16 = (unsigned char)84;
int zero = 0;
short var_17 = (short)-22120;
int var_18 = 57482925;
unsigned int var_19 = 2861930241U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
