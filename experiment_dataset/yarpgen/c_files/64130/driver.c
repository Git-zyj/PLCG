#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47043;
short var_2 = (short)-4375;
unsigned short var_3 = (unsigned short)52687;
short var_7 = (short)-31181;
long long int var_9 = -8832929973055448730LL;
signed char var_11 = (signed char)62;
unsigned char var_13 = (unsigned char)73;
int zero = 0;
unsigned char var_19 = (unsigned char)30;
signed char var_20 = (signed char)-12;
unsigned int var_21 = 626627619U;
unsigned short var_22 = (unsigned short)38201;
short var_23 = (short)-11293;
short var_24 = (short)8627;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
