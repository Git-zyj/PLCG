#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1054424792;
signed char var_1 = (signed char)2;
unsigned char var_3 = (unsigned char)132;
int var_6 = 2005566852;
int var_7 = 1010266126;
unsigned char var_8 = (unsigned char)143;
short var_10 = (short)-23481;
long long int var_11 = 95067238702087917LL;
int zero = 0;
unsigned char var_13 = (unsigned char)46;
unsigned long long int var_14 = 989721143176142618ULL;
unsigned char var_15 = (unsigned char)232;
int var_16 = -1058299192;
void init() {
}

void checksum() {
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
