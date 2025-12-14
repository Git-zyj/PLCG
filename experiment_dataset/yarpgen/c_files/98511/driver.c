#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4571;
signed char var_2 = (signed char)-18;
unsigned short var_3 = (unsigned short)7589;
unsigned char var_4 = (unsigned char)224;
int var_5 = 595386397;
unsigned short var_6 = (unsigned short)33939;
unsigned char var_7 = (unsigned char)19;
unsigned short var_8 = (unsigned short)58719;
int zero = 0;
unsigned short var_10 = (unsigned short)4394;
int var_11 = 621599066;
unsigned char var_12 = (unsigned char)153;
unsigned char var_13 = (unsigned char)204;
unsigned short var_14 = (unsigned short)52750;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
