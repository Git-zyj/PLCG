#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16455;
signed char var_1 = (signed char)-115;
unsigned char var_3 = (unsigned char)249;
unsigned int var_4 = 54423644U;
short var_5 = (short)24915;
unsigned char var_6 = (unsigned char)87;
unsigned char var_8 = (unsigned char)246;
unsigned char var_10 = (unsigned char)141;
int zero = 0;
unsigned char var_11 = (unsigned char)12;
unsigned char var_12 = (unsigned char)186;
short var_13 = (short)10961;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
