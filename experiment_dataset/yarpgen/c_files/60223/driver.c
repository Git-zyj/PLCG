#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1457678666;
unsigned short var_1 = (unsigned short)37867;
unsigned short var_2 = (unsigned short)40627;
unsigned short var_3 = (unsigned short)52902;
signed char var_5 = (signed char)-61;
unsigned long long int var_7 = 4485428983113535351ULL;
unsigned short var_9 = (unsigned short)35333;
int zero = 0;
unsigned char var_11 = (unsigned char)86;
unsigned int var_12 = 747929738U;
unsigned int var_13 = 3213935081U;
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
