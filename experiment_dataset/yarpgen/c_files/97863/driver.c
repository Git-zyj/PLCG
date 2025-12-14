#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)11769;
unsigned short var_6 = (unsigned short)51083;
unsigned long long int var_8 = 12029393623080677051ULL;
signed char var_9 = (signed char)-38;
short var_10 = (short)4240;
short var_11 = (short)-27811;
int zero = 0;
short var_13 = (short)8794;
unsigned long long int var_14 = 10171658638082060639ULL;
long long int var_15 = 4123520623856422340LL;
unsigned char var_16 = (unsigned char)106;
signed char var_17 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
