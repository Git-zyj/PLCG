#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2030511575U;
unsigned int var_1 = 602884376U;
int var_2 = 1783516951;
unsigned int var_3 = 3192829279U;
unsigned char var_5 = (unsigned char)254;
unsigned short var_8 = (unsigned short)24906;
unsigned int var_9 = 2266401599U;
int var_10 = -1846017713;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)30814;
unsigned char var_13 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
