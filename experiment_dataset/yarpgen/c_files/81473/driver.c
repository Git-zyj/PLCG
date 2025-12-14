#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17368;
unsigned long long int var_2 = 8440713886543320893ULL;
long long int var_5 = -1269605930263761186LL;
int var_6 = -1225496365;
short var_8 = (short)-5608;
unsigned long long int var_9 = 13245867622274683798ULL;
unsigned int var_11 = 2223891379U;
int var_12 = -1008064163;
unsigned int var_13 = 1219146345U;
unsigned short var_14 = (unsigned short)45057;
unsigned int var_15 = 306601081U;
unsigned char var_17 = (unsigned char)144;
int zero = 0;
int var_18 = 1545400907;
int var_19 = 1249477350;
unsigned short var_20 = (unsigned short)60267;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
