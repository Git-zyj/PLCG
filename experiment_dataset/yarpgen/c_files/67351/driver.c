#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)96;
int var_7 = -60884803;
short var_12 = (short)30088;
int zero = 0;
short var_15 = (short)-32265;
unsigned char var_16 = (unsigned char)172;
unsigned short var_17 = (unsigned short)38558;
signed char var_18 = (signed char)76;
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
