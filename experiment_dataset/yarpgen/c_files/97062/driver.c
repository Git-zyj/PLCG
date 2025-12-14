#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3693;
unsigned char var_1 = (unsigned char)93;
unsigned long long int var_2 = 8397940096225892496ULL;
unsigned long long int var_3 = 3972245390677964983ULL;
unsigned char var_4 = (unsigned char)165;
unsigned int var_5 = 957816901U;
unsigned int var_6 = 2376973357U;
int var_8 = 1951432772;
signed char var_10 = (signed char)55;
int zero = 0;
short var_11 = (short)6011;
unsigned short var_12 = (unsigned short)41079;
unsigned char var_13 = (unsigned char)99;
unsigned char var_14 = (unsigned char)86;
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
