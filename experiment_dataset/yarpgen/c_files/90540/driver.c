#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30996;
long long int var_3 = -5986060473080088253LL;
signed char var_6 = (signed char)-53;
int var_11 = -1035977971;
unsigned char var_12 = (unsigned char)160;
unsigned long long int var_13 = 2877307433806008031ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 680031031U;
short var_22 = (short)-25230;
unsigned char var_23 = (unsigned char)167;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
