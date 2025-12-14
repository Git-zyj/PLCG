#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8466;
unsigned short var_1 = (unsigned short)31244;
unsigned char var_2 = (unsigned char)86;
unsigned short var_3 = (unsigned short)41029;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)3;
unsigned char var_11 = (unsigned char)233;
int zero = 0;
unsigned char var_12 = (unsigned char)167;
unsigned short var_13 = (unsigned short)63136;
unsigned char var_14 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
