#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-8469;
unsigned char var_5 = (unsigned char)0;
int var_11 = 859006389;
unsigned long long int var_12 = 17507506585915483725ULL;
unsigned int var_14 = 2708565074U;
int zero = 0;
signed char var_15 = (signed char)-109;
unsigned short var_16 = (unsigned short)3396;
long long int var_17 = -2094879305349898350LL;
long long int var_18 = -5066559679755085759LL;
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
