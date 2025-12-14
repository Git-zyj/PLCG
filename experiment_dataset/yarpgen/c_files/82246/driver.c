#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
unsigned char var_1 = (unsigned char)32;
unsigned char var_2 = (unsigned char)77;
unsigned char var_3 = (unsigned char)73;
unsigned char var_4 = (unsigned char)233;
unsigned char var_5 = (unsigned char)61;
unsigned char var_6 = (unsigned char)220;
unsigned char var_10 = (unsigned char)4;
unsigned char var_12 = (unsigned char)202;
unsigned char var_13 = (unsigned char)215;
unsigned char var_14 = (unsigned char)89;
unsigned char var_15 = (unsigned char)139;
unsigned char var_17 = (unsigned char)248;
unsigned char var_19 = (unsigned char)127;
int zero = 0;
unsigned char var_20 = (unsigned char)227;
unsigned char var_21 = (unsigned char)53;
unsigned char var_22 = (unsigned char)114;
unsigned char var_23 = (unsigned char)204;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
