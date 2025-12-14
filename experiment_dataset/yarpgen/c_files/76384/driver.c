#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)199;
unsigned char var_2 = (unsigned char)226;
short var_3 = (short)25479;
unsigned char var_5 = (unsigned char)148;
unsigned char var_6 = (unsigned char)109;
unsigned int var_7 = 432898642U;
unsigned int var_8 = 1278131725U;
unsigned int var_10 = 3814138895U;
unsigned int var_11 = 4150283180U;
short var_12 = (short)-28866;
int zero = 0;
unsigned int var_13 = 3373222597U;
unsigned int var_14 = 3824386865U;
unsigned char var_15 = (unsigned char)52;
unsigned char var_16 = (unsigned char)12;
void init() {
}

void checksum() {
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
