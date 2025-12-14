#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1584095731;
unsigned long long int var_2 = 2074065250037462203ULL;
short var_4 = (short)-23853;
int var_12 = 2013885577;
unsigned long long int var_13 = 10406956129277762864ULL;
int zero = 0;
int var_15 = 353772142;
signed char var_16 = (signed char)-12;
unsigned char var_17 = (unsigned char)46;
unsigned short var_18 = (unsigned short)45489;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
