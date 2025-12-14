#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 622605726;
unsigned char var_4 = (unsigned char)89;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3009151052U;
short var_7 = (short)-13241;
unsigned char var_8 = (unsigned char)217;
unsigned char var_12 = (unsigned char)173;
unsigned char var_13 = (unsigned char)227;
int zero = 0;
signed char var_16 = (signed char)-127;
int var_17 = -77765534;
unsigned short var_18 = (unsigned short)56987;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
