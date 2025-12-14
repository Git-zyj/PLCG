#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17537;
int var_2 = 981528349;
unsigned char var_4 = (unsigned char)43;
signed char var_6 = (signed char)123;
int var_8 = 1532631979;
int zero = 0;
short var_13 = (short)27761;
unsigned char var_14 = (unsigned char)215;
unsigned short var_15 = (unsigned short)64431;
unsigned int var_16 = 950588178U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
