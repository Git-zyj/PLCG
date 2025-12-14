#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31455;
unsigned char var_1 = (unsigned char)14;
unsigned short var_2 = (unsigned short)37669;
signed char var_3 = (signed char)69;
int var_4 = -1381481856;
signed char var_6 = (signed char)-91;
short var_7 = (short)7298;
signed char var_9 = (signed char)116;
int var_10 = -905424417;
int zero = 0;
int var_11 = -710374160;
unsigned char var_12 = (unsigned char)215;
long long int var_13 = -7200610714246836634LL;
_Bool var_14 = (_Bool)0;
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
