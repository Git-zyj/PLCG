#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30761;
unsigned int var_4 = 1486998020U;
unsigned short var_7 = (unsigned short)60920;
signed char var_9 = (signed char)-18;
short var_10 = (short)-28283;
signed char var_11 = (signed char)6;
short var_16 = (short)-27621;
int zero = 0;
signed char var_20 = (signed char)30;
unsigned char var_21 = (unsigned char)239;
void init() {
}

void checksum() {
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
