#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
unsigned char var_3 = (unsigned char)92;
int var_4 = 216653479;
unsigned char var_5 = (unsigned char)10;
unsigned char var_6 = (unsigned char)100;
int zero = 0;
unsigned char var_10 = (unsigned char)32;
short var_11 = (short)-22042;
unsigned int var_12 = 2075031388U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
