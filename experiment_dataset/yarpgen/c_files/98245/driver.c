#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)9;
long long int var_9 = -5318989462820668504LL;
signed char var_11 = (signed char)-73;
unsigned short var_12 = (unsigned short)12858;
unsigned char var_14 = (unsigned char)154;
unsigned short var_15 = (unsigned short)31221;
int zero = 0;
long long int var_16 = 5566013134634986720LL;
signed char var_17 = (signed char)91;
short var_18 = (short)-556;
void init() {
}

void checksum() {
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
