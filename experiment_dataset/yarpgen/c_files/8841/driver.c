#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1000;
unsigned short var_2 = (unsigned short)65020;
unsigned char var_8 = (unsigned char)175;
signed char var_11 = (signed char)-68;
long long int var_12 = -6204126801291577377LL;
unsigned char var_14 = (unsigned char)155;
signed char var_16 = (signed char)95;
unsigned int var_18 = 825943858U;
int zero = 0;
int var_19 = 643629289;
unsigned char var_20 = (unsigned char)67;
short var_21 = (short)6266;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
