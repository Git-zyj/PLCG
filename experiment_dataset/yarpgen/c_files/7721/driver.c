#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63413;
unsigned char var_1 = (unsigned char)120;
unsigned char var_2 = (unsigned char)253;
unsigned long long int var_4 = 2468023438354944282ULL;
unsigned char var_6 = (unsigned char)11;
signed char var_7 = (signed char)100;
int zero = 0;
unsigned short var_12 = (unsigned short)54927;
signed char var_13 = (signed char)102;
signed char var_14 = (signed char)-20;
signed char var_15 = (signed char)52;
signed char var_16 = (signed char)102;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
