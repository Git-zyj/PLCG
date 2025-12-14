#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-30073;
unsigned int var_5 = 2369976810U;
signed char var_6 = (signed char)69;
signed char var_7 = (signed char)-31;
unsigned short var_9 = (unsigned short)2161;
int zero = 0;
unsigned short var_12 = (unsigned short)8496;
long long int var_13 = -4754986878734788358LL;
unsigned long long int var_14 = 4534841576324739806ULL;
unsigned char var_15 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
