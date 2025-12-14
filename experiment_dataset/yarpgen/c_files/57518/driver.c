#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21435;
unsigned short var_3 = (unsigned short)43236;
unsigned short var_6 = (unsigned short)26874;
unsigned char var_7 = (unsigned char)179;
_Bool var_10 = (_Bool)1;
int var_11 = 1145882593;
short var_14 = (short)-31562;
int zero = 0;
unsigned char var_15 = (unsigned char)119;
short var_16 = (short)30577;
void init() {
}

void checksum() {
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
