#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2408870222995556833LL;
unsigned long long int var_2 = 9597090282527706560ULL;
unsigned char var_5 = (unsigned char)125;
unsigned short var_6 = (unsigned short)24237;
short var_7 = (short)-26444;
unsigned short var_9 = (unsigned short)49968;
unsigned int var_13 = 2182411703U;
long long int var_15 = 5767563709088272050LL;
int zero = 0;
unsigned char var_20 = (unsigned char)201;
int var_21 = 1140984330;
unsigned char var_22 = (unsigned char)132;
unsigned int var_23 = 4074919710U;
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
