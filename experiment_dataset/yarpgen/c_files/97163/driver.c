#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)43;
unsigned short var_1 = (unsigned short)47567;
signed char var_8 = (signed char)3;
unsigned short var_10 = (unsigned short)7496;
int zero = 0;
int var_11 = -600023787;
short var_12 = (short)-21770;
unsigned short var_13 = (unsigned short)35299;
unsigned int var_14 = 1872120096U;
int var_15 = 469864318;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
