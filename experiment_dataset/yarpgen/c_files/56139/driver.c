#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)936;
unsigned char var_1 = (unsigned char)173;
long long int var_2 = 554465413872998719LL;
unsigned char var_3 = (unsigned char)207;
unsigned short var_4 = (unsigned short)4061;
signed char var_5 = (signed char)52;
unsigned char var_6 = (unsigned char)41;
long long int var_7 = 3654956899175823917LL;
unsigned int var_10 = 3989801781U;
unsigned char var_11 = (unsigned char)157;
int zero = 0;
short var_12 = (short)13750;
unsigned short var_13 = (unsigned short)22350;
_Bool var_14 = (_Bool)1;
int var_15 = -192810206;
unsigned short var_16 = (unsigned short)4328;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
