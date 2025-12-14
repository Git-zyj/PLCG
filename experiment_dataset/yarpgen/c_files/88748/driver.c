#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1890077221;
unsigned int var_2 = 560983317U;
unsigned char var_3 = (unsigned char)238;
short var_5 = (short)17772;
unsigned long long int var_8 = 16046299800743392873ULL;
unsigned char var_9 = (unsigned char)173;
short var_10 = (short)6603;
unsigned int var_12 = 2846649914U;
unsigned short var_13 = (unsigned short)39136;
int zero = 0;
unsigned short var_20 = (unsigned short)63702;
unsigned int var_21 = 487907109U;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 7163990693202512522ULL;
unsigned long long int var_24 = 2572704194897384651ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
