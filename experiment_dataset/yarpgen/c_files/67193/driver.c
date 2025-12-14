#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2066384575U;
short var_1 = (short)-17314;
long long int var_6 = -6491289357808136957LL;
signed char var_7 = (signed char)63;
unsigned short var_8 = (unsigned short)52727;
unsigned char var_15 = (unsigned char)225;
int zero = 0;
short var_18 = (short)16663;
short var_19 = (short)19085;
unsigned char var_20 = (unsigned char)75;
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
