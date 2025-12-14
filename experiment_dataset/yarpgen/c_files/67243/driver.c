#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2343;
int var_3 = -1975337153;
signed char var_4 = (signed char)-117;
unsigned long long int var_14 = 6217156670009830955ULL;
int zero = 0;
short var_15 = (short)18805;
short var_16 = (short)-13449;
unsigned char var_17 = (unsigned char)100;
unsigned int var_18 = 1946691312U;
unsigned int var_19 = 1364393692U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
