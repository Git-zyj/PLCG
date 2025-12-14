#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)230;
int var_7 = -2087146245;
unsigned int var_12 = 1951688217U;
unsigned char var_13 = (unsigned char)239;
unsigned int var_15 = 3884654761U;
int zero = 0;
unsigned short var_16 = (unsigned short)61357;
long long int var_17 = 8742904406894450638LL;
signed char var_18 = (signed char)12;
unsigned short var_19 = (unsigned short)8163;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
