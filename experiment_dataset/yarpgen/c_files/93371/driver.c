#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-80;
short var_2 = (short)-9792;
unsigned short var_4 = (unsigned short)19951;
unsigned short var_5 = (unsigned short)41378;
signed char var_7 = (signed char)-111;
unsigned int var_10 = 2878100226U;
int zero = 0;
unsigned short var_12 = (unsigned short)4914;
unsigned long long int var_13 = 1607550495559373451ULL;
void init() {
}

void checksum() {
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
