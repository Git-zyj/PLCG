#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)18;
short var_4 = (short)32538;
unsigned char var_5 = (unsigned char)227;
unsigned int var_6 = 2175026617U;
unsigned short var_7 = (unsigned short)11548;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 818858457U;
int var_12 = -975610567;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
