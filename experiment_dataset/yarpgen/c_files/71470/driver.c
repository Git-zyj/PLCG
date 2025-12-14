#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)9;
signed char var_2 = (signed char)108;
short var_6 = (short)21805;
unsigned char var_7 = (unsigned char)148;
unsigned int var_8 = 2917455723U;
unsigned short var_9 = (unsigned short)13123;
unsigned long long int var_10 = 10596746978465774006ULL;
unsigned short var_11 = (unsigned short)35534;
int zero = 0;
unsigned char var_17 = (unsigned char)227;
unsigned short var_18 = (unsigned short)57100;
signed char var_19 = (signed char)-46;
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
