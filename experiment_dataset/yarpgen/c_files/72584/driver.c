#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11255;
unsigned int var_3 = 3155654896U;
int var_5 = -1745826581;
unsigned short var_6 = (unsigned short)53898;
unsigned int var_12 = 273060735U;
unsigned int var_14 = 1134890726U;
short var_15 = (short)4859;
int zero = 0;
unsigned char var_19 = (unsigned char)90;
signed char var_20 = (signed char)88;
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
