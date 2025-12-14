#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
unsigned int var_1 = 4120409086U;
unsigned short var_2 = (unsigned short)12290;
unsigned char var_3 = (unsigned char)172;
unsigned int var_4 = 2300599342U;
unsigned char var_5 = (unsigned char)83;
short var_6 = (short)8149;
signed char var_7 = (signed char)-111;
unsigned char var_8 = (unsigned char)5;
signed char var_9 = (signed char)-97;
int zero = 0;
short var_11 = (short)14720;
int var_12 = -200438904;
long long int var_13 = 7266582980302789550LL;
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
