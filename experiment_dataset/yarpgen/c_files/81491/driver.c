#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58408;
short var_6 = (short)-17620;
signed char var_8 = (signed char)(-127 - 1);
long long int var_13 = -3632222835239429462LL;
unsigned long long int var_15 = 1926137615374101086ULL;
unsigned char var_19 = (unsigned char)173;
int zero = 0;
unsigned short var_20 = (unsigned short)15681;
signed char var_21 = (signed char)61;
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
