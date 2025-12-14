#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)87;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)38;
unsigned char var_4 = (unsigned char)196;
unsigned short var_6 = (unsigned short)56841;
signed char var_10 = (signed char)38;
signed char var_12 = (signed char)-67;
int zero = 0;
unsigned short var_13 = (unsigned short)37161;
unsigned short var_14 = (unsigned short)34706;
unsigned short var_15 = (unsigned short)45415;
unsigned short var_16 = (unsigned short)48459;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
