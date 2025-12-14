#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)178;
short var_2 = (short)26870;
unsigned short var_5 = (unsigned short)64869;
signed char var_6 = (signed char)49;
int zero = 0;
unsigned int var_15 = 3904143536U;
signed char var_16 = (signed char)-119;
unsigned char var_17 = (unsigned char)158;
signed char var_18 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
