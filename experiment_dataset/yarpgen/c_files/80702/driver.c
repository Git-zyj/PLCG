#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)14;
short var_4 = (short)20722;
signed char var_5 = (signed char)-11;
unsigned long long int var_7 = 7971394756385894942ULL;
unsigned int var_10 = 1801037564U;
signed char var_12 = (signed char)-9;
int zero = 0;
short var_19 = (short)-1847;
unsigned long long int var_20 = 10593311547608274619ULL;
unsigned long long int var_21 = 18163287916250744482ULL;
int var_22 = -64139205;
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
