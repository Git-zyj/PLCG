#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)75;
unsigned char var_2 = (unsigned char)146;
unsigned int var_5 = 1308387127U;
short var_6 = (short)-17022;
unsigned int var_7 = 4222289804U;
int zero = 0;
signed char var_15 = (signed char)3;
unsigned char var_16 = (unsigned char)116;
void init() {
}

void checksum() {
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
