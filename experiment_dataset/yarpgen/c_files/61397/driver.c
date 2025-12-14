#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)90;
short var_3 = (short)-18820;
unsigned short var_6 = (unsigned short)33992;
int zero = 0;
int var_10 = 61033527;
unsigned char var_11 = (unsigned char)178;
unsigned long long int var_12 = 11411117320271514343ULL;
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
