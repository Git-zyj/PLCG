#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)11793;
short var_5 = (short)-8462;
unsigned char var_13 = (unsigned char)10;
signed char var_14 = (signed char)55;
int zero = 0;
unsigned int var_17 = 736732417U;
int var_18 = 1158378836;
unsigned int var_19 = 1780473898U;
unsigned long long int var_20 = 5977597607894745997ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
