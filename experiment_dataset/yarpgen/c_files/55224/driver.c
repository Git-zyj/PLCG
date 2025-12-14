#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1568219698U;
short var_1 = (short)1251;
int var_4 = -2025839968;
int var_8 = -237557082;
unsigned short var_11 = (unsigned short)5706;
unsigned long long int var_12 = 9447259084383193344ULL;
long long int var_14 = 2796035497359884698LL;
short var_15 = (short)-21885;
int var_17 = 1468319433;
int zero = 0;
unsigned char var_18 = (unsigned char)157;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-19055;
void init() {
}

void checksum() {
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
