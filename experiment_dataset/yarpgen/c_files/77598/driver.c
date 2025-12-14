#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)132;
short var_2 = (short)29720;
short var_3 = (short)722;
unsigned short var_4 = (unsigned short)17973;
unsigned char var_5 = (unsigned char)95;
short var_6 = (short)-4;
short var_9 = (short)-9450;
int zero = 0;
unsigned char var_11 = (unsigned char)59;
short var_12 = (short)-18770;
short var_13 = (short)17814;
unsigned char var_14 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
