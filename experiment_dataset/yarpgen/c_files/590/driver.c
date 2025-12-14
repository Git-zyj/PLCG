#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
int var_2 = -2050307189;
signed char var_3 = (signed char)66;
unsigned char var_9 = (unsigned char)134;
int zero = 0;
unsigned short var_13 = (unsigned short)29905;
unsigned int var_14 = 3911051588U;
unsigned char var_15 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
