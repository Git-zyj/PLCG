#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)223;
unsigned short var_3 = (unsigned short)19548;
long long int var_4 = -4995945268753734109LL;
unsigned long long int var_6 = 7859862767952350439ULL;
unsigned char var_11 = (unsigned char)67;
int zero = 0;
int var_13 = -593677470;
short var_14 = (short)23177;
short var_15 = (short)-17751;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
