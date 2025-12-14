#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1296202762;
unsigned char var_4 = (unsigned char)157;
unsigned int var_5 = 3908814673U;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)52811;
int var_9 = 1352734448;
short var_10 = (short)-32711;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)116;
unsigned char var_13 = (unsigned char)127;
short var_14 = (short)-28806;
short var_16 = (short)11638;
unsigned short var_17 = (unsigned short)30155;
int zero = 0;
int var_18 = -1516588544;
int var_19 = -250968041;
unsigned int var_20 = 3846448863U;
unsigned short var_21 = (unsigned short)35480;
unsigned char var_22 = (unsigned char)244;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
