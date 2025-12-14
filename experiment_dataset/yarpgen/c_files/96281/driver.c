#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)68;
unsigned char var_2 = (unsigned char)139;
short var_6 = (short)12003;
short var_8 = (short)-8323;
unsigned short var_15 = (unsigned short)7495;
signed char var_16 = (signed char)30;
int zero = 0;
unsigned char var_19 = (unsigned char)112;
int var_20 = -1725523337;
void init() {
}

void checksum() {
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
