#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10453701632081718032ULL;
int var_2 = -213729953;
unsigned char var_3 = (unsigned char)199;
short var_5 = (short)-10841;
unsigned long long int var_10 = 4387499002738364566ULL;
unsigned char var_11 = (unsigned char)100;
unsigned char var_12 = (unsigned char)126;
unsigned char var_13 = (unsigned char)109;
unsigned long long int var_14 = 15841601297715656034ULL;
long long int var_15 = 6900138630010999970LL;
int zero = 0;
unsigned char var_16 = (unsigned char)137;
signed char var_17 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
