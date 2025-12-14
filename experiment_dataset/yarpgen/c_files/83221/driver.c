#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)8032;
short var_5 = (short)-16952;
unsigned char var_6 = (unsigned char)197;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-30939;
unsigned char var_9 = (unsigned char)54;
unsigned char var_10 = (unsigned char)44;
int zero = 0;
unsigned short var_12 = (unsigned short)1342;
short var_13 = (short)-20288;
unsigned short var_14 = (unsigned short)37661;
short var_15 = (short)8201;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
