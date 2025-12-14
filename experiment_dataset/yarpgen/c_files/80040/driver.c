#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)93;
unsigned int var_6 = 1891492603U;
unsigned int var_8 = 3028645444U;
int zero = 0;
short var_19 = (short)-12691;
unsigned short var_20 = (unsigned short)64647;
unsigned int var_21 = 1535302496U;
unsigned short var_22 = (unsigned short)36076;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
