#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24172;
signed char var_4 = (signed char)127;
short var_8 = (short)-7539;
int var_13 = -255776006;
signed char var_14 = (signed char)-90;
short var_15 = (short)8368;
int zero = 0;
unsigned short var_16 = (unsigned short)65034;
int var_17 = -830032580;
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
