#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 922732629U;
unsigned short var_3 = (unsigned short)61042;
long long int var_4 = 1146225950044520424LL;
unsigned short var_5 = (unsigned short)12246;
unsigned short var_7 = (unsigned short)57188;
unsigned char var_8 = (unsigned char)161;
unsigned short var_9 = (unsigned short)57633;
unsigned long long int var_10 = 9970851016196737526ULL;
unsigned char var_11 = (unsigned char)140;
unsigned long long int var_12 = 6898551500160841611ULL;
short var_14 = (short)-2284;
int zero = 0;
unsigned int var_15 = 1407268085U;
int var_16 = 1240340651;
int var_17 = 2030333559;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
