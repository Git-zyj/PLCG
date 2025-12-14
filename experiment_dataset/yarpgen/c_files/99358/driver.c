#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2833402383U;
signed char var_3 = (signed char)-72;
short var_5 = (short)13897;
short var_6 = (short)-13641;
unsigned int var_7 = 21122044U;
int var_8 = 1997364339;
int zero = 0;
unsigned char var_10 = (unsigned char)225;
unsigned short var_11 = (unsigned short)48067;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
