#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)3394;
unsigned int var_4 = 4731071U;
short var_5 = (short)-22251;
unsigned short var_7 = (unsigned short)7532;
unsigned int var_8 = 1929100191U;
int zero = 0;
short var_15 = (short)12667;
unsigned int var_16 = 1515500670U;
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
