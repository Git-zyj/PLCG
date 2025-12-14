#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 293350004;
unsigned short var_3 = (unsigned short)27783;
signed char var_7 = (signed char)-7;
short var_9 = (short)-12847;
int var_11 = -431980664;
short var_13 = (short)7371;
signed char var_14 = (signed char)10;
int zero = 0;
unsigned short var_15 = (unsigned short)24889;
signed char var_16 = (signed char)116;
unsigned int var_17 = 2725140540U;
void init() {
}

void checksum() {
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
