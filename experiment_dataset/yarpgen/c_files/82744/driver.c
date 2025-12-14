#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)32634;
unsigned short var_4 = (unsigned short)63222;
int var_7 = 22677044;
long long int var_8 = -4439282972431560333LL;
long long int var_11 = -4342435292476509625LL;
unsigned char var_16 = (unsigned char)219;
int zero = 0;
unsigned long long int var_20 = 8860407310841043658ULL;
unsigned char var_21 = (unsigned char)90;
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
