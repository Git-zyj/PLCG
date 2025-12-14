#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2403943088782762828ULL;
unsigned int var_10 = 769174431U;
int var_13 = -1566126355;
unsigned char var_18 = (unsigned char)160;
int zero = 0;
unsigned short var_20 = (unsigned short)42120;
signed char var_21 = (signed char)-90;
unsigned int var_22 = 1209226409U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
