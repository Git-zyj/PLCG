#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1809;
unsigned short var_1 = (unsigned short)46065;
unsigned char var_2 = (unsigned char)0;
short var_4 = (short)-31734;
unsigned short var_5 = (unsigned short)4130;
unsigned char var_6 = (unsigned char)176;
unsigned char var_8 = (unsigned char)253;
int zero = 0;
unsigned short var_10 = (unsigned short)43337;
signed char var_11 = (signed char)-55;
signed char var_12 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
